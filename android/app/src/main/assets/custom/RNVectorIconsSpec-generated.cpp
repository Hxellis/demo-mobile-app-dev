
/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleJniCpp.js
 */

#include "RNVectorIconsSpec.h"

namespace facebook::react {

static facebook::jsi::Value __hostFunction_NativeRNVectorIconsSpecJSI_getImageForFont(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
  static jmethodID cachedMethodId = nullptr;
  return static_cast<JavaTurboModule &>(turboModule).invokeJavaMethod(rt, PromiseKind, "getImageForFont", "(Ljava/lang/String;Ljava/lang/String;DDLcom/facebook/react/bridge/Promise;)V", args, count, cachedMethodId);
}

static facebook::jsi::Value __hostFunction_NativeRNVectorIconsSpecJSI_getImageForFontSync(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
  static jmethodID cachedMethodId = nullptr;
  return static_cast<JavaTurboModule &>(turboModule).invokeJavaMethod(rt, StringKind, "getImageForFontSync", "(Ljava/lang/String;Ljava/lang/String;DD)Ljava/lang/String;", args, count, cachedMethodId);
}

static facebook::jsi::Value __hostFunction_NativeRNVectorIconsSpecJSI_loadFontWithFileName(facebook::jsi::Runtime& rt, TurboModule &turboModule, const facebook::jsi::Value* args, size_t count) {
  static jmethodID cachedMethodId = nullptr;
  return static_cast<JavaTurboModule &>(turboModule).invokeJavaMethod(rt, PromiseKind, "loadFontWithFileName", "(Ljava/lang/String;Ljava/lang/String;Lcom/facebook/react/bridge/Promise;)V", args, count, cachedMethodId);
}

NativeRNVectorIconsSpecJSI::NativeRNVectorIconsSpecJSI(const JavaTurboModule::InitParams &params)
  : JavaTurboModule(params) {
  methodMap_["getImageForFont"] = MethodMetadata {4, __hostFunction_NativeRNVectorIconsSpecJSI_getImageForFont};
  methodMap_["getImageForFontSync"] = MethodMetadata {4, __hostFunction_NativeRNVectorIconsSpecJSI_getImageForFontSync};
  methodMap_["loadFontWithFileName"] = MethodMetadata {2, __hostFunction_NativeRNVectorIconsSpecJSI_loadFontWithFileName};
}

std::shared_ptr<TurboModule> RNVectorIconsSpec_ModuleProvider(const std::string &moduleName, const JavaTurboModule::InitParams &params) {
  if (moduleName == "RNVectorIcons") {
    return std::make_shared<NativeRNVectorIconsSpecJSI>(params);
  }
  return nullptr;
}

} // namespace facebook::react
