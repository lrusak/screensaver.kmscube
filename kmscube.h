#include <kodi/addon-instance/Screensaver.h>

#include <memory>

extern "C" {
#include "common.h"
}

class CMyAddon
  : public kodi::addon::CAddonBase,
    public kodi::addon::CInstanceScreensaver
{
public:
  CMyAddon() = default;

  virtual bool Start() override;
  virtual void Stop() override;
  virtual void Render() override;

private:
  const struct egl *m_egl = nullptr;

  uint32_t i = 0;
};