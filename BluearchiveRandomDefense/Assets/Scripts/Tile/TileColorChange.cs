using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class TileColorChange : MonoBehaviour, IPointerDownHandler, IDragHandler
{
    public Image m_Palette;
    public Image m_Picker;
    Tile[] m_Tile;
    Material[] m_TileMat;
    CircleCollider2D m_PaletteCol;
    Vector2 m_PaletteSize;
    Color m_SelectedColor;

    private void Awake()
    {
        m_PaletteCol = GetComponent<CircleCollider2D>();
        m_Tile = Resources.FindObjectsOfTypeAll<Tile>();
        m_TileMat = new Material[m_Tile.Length];
        for (int i = 0; i < m_TileMat.Length; i++)
        {
            m_TileMat[i] = m_Tile[i].gameObject.GetComponent<SpriteRenderer>().material;
        }
        m_PaletteSize = new Vector2(
            m_Palette.GetComponent<RectTransform>().rect.width,
            m_Palette.GetComponent<RectTransform>().rect.height);
    }
    private void Start()
    {
        ColorInit();
        gameObject.SetActive(false);
        m_Picker.gameObject.SetActive(false);
    }
    private Color GetColor()
    {
        Vector2 circlePalettePosition = m_Palette.rectTransform.anchoredPosition;
        Vector2 pickerPosition = m_Picker.rectTransform.anchoredPosition;

        Vector2 position = pickerPosition - circlePalettePosition + m_PaletteSize * 0.5f;

        Vector2 normalized = new Vector2(
            (position.x / (m_Palette.GetComponent<RectTransform>().rect.width)),
            (position.y / (m_Palette.GetComponent<RectTransform>().rect.height)));

        Texture2D texture = m_Palette.mainTexture as Texture2D;
        Color circularSelectedColor = texture.GetPixelBilinear(normalized.x, normalized.y).a >= 0.95f 
            ? texture.GetPixelBilinear(normalized.x, normalized.y)
            : m_SelectedColor;

        return circularSelectedColor;
    }

    void ColorInit()
    {
        for (int i = 0; i < m_TileMat.Length; i++)
        {
            m_TileMat[i].color = new Color(0f, 0.7f, 1f);
        }
    }
    private void SelectColor()
    {
        Vector3 mousePos = Vector3.one;
        RectTransformUtility.ScreenPointToWorldPointInRectangle
            (gameObject.GetComponent<RectTransform>(), Input.mousePosition, Camera.main, out mousePos);

        m_Picker.transform.position = mousePos;

        m_SelectedColor = GetColor();

        Debug.Log(Vector2.Distance(m_Picker.transform.position, m_Palette.transform.position));

        for (int i = 0; i < m_TileMat.Length; i++)
        {
            m_TileMat[i].color = m_SelectedColor;
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        SelectColor();
    }

    public void OnDrag(PointerEventData eventData)
    {
        SelectColor();
    }
}
