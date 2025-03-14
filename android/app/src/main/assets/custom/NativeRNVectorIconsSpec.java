
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleJavaSpec.js
 *
 * @nolint
 */

package com.oblador.vectoricons;

import com.facebook.proguard.annotations.DoNotStrip;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.turbomodule.core.interfaces.TurboModule;
import javax.annotation.Nonnull;

public abstract class NativeRNVectorIconsSpec extends ReactContextBaseJavaModule implements TurboModule {
  public static final String NAME = "RNVectorIcons";

  public NativeRNVectorIconsSpec(ReactApplicationContext reactContext) {
    super(reactContext);
  }

  @Override
  public @Nonnull String getName() {
    return NAME;
  }

  @ReactMethod
  @DoNotStrip
  public abstract void getImageForFont(String fontName, String glyph, double fontSize, double color, Promise promise);

  @ReactMethod(isBlockingSynchronousMethod = true)
  @DoNotStrip
  public abstract String getImageForFontSync(String fontName, String glyph, double fontSize, double color);

  @ReactMethod
  @DoNotStrip
  public abstract void loadFontWithFileName(String fontFileName, String extension, Promise promise);
}
