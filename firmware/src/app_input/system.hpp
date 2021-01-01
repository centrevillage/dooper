#ifndef LR_APP_INPUT_SYSTEM_H
#define LR_APP_INPUT_SYSTEM_H

struct AppInputSystem {
  void init() {
    view.changeMode(AppViewSystem {});
  }

  void refresh() {
    if (!view.isMode<AppViewSystem>()) { return; }
    auto& view_mode = view.getMode<AppViewSystem>();

    view.update();
  }

  bool button(AppBtnID id, bool on) {
    return false;
  }

  bool slider(AppSliderID id, float value) {
    return false;
  }
};

#endif /* LR_APP_INPUT_SYSTEM_H */