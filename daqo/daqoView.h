
// daqoView.h : CdaqoView ��Ľӿ�
//

#pragma once


class CdaqoView : public CView
{
protected: // �������л�����
	CdaqoView();
	DECLARE_DYNCREATE(CdaqoView)

// ����
public:
	CdaqoDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CdaqoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // daqoView.cpp �еĵ��԰汾
inline CdaqoDoc* CdaqoView::GetDocument() const
   { return reinterpret_cast<CdaqoDoc*>(m_pDocument); }
#endif

