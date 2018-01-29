#include "kmscube.h"

bool CMyAddon::Start()
{
  struct gbm m_gbm;
  m_gbm.width = Width();
  m_gbm.height = Height();

  m_egl = init_cube_smooth(&m_gbm);
  if (!m_egl)
    return false;

  return true;
}

void CMyAddon::Stop()
{
}

void CMyAddon::Render()
{
  m_egl->draw(i++);
}

ADDONCREATOR(CMyAddon);
