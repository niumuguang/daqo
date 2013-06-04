
// daqoView.cpp : CdaqoView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "daqo.h"
#endif

#include "daqoDoc.h"
#include "daqoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CdaqoView

IMPLEMENT_DYNCREATE(CdaqoView, CView)

BEGIN_MESSAGE_MAP(CdaqoView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CdaqoView ����/����

CdaqoView::CdaqoView()
{
	// TODO: �ڴ˴���ӹ������

}

CdaqoView::~CdaqoView()
{
}

BOOL CdaqoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CdaqoView ����

void CdaqoView::OnDraw(CDC* /*pDC*/)
{
	CdaqoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}

void CdaqoView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CdaqoView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CdaqoView ���

#ifdef _DEBUG
void CdaqoView::AssertValid() const
{
	CView::AssertValid();
}

void CdaqoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CdaqoDoc* CdaqoView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CdaqoDoc)));
	return (CdaqoDoc*)m_pDocument;
}
#endif //_DEBUG


// CdaqoView ��Ϣ�������
