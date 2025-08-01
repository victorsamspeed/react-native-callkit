/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleH.js
 */

#pragma once

#include <ReactCommon/TurboModule.h>
#include <react/bridging/Bridging.h>

namespace facebook::react {


  
#pragma mark - NativeCameraRollModuleAlbum

template <typename P0, typename P1, typename P2, typename P3, typename P4>
struct NativeCameraRollModuleAlbum {
  P0 id;
  P1 title;
  P2 count;
  P3 type;
  P4 subtype;
  bool operator==(const NativeCameraRollModuleAlbum &other) const {
    return id == other.id && title == other.title && count == other.count && type == other.type && subtype == other.subtype;
  }
};

template <typename T>
struct NativeCameraRollModuleAlbumBridging {
  static T types;

  static T fromJs(
      jsi::Runtime &rt,
      const jsi::Object &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    T result{
      bridging::fromJs<decltype(types.id)>(rt, value.getProperty(rt, "id"), jsInvoker),
      bridging::fromJs<decltype(types.title)>(rt, value.getProperty(rt, "title"), jsInvoker),
      bridging::fromJs<decltype(types.count)>(rt, value.getProperty(rt, "count"), jsInvoker),
      bridging::fromJs<decltype(types.type)>(rt, value.getProperty(rt, "type"), jsInvoker),
      bridging::fromJs<decltype(types.subtype)>(rt, value.getProperty(rt, "subtype"), jsInvoker)};
    return result;
  }

#ifdef DEBUG
  static jsi::String idToJs(jsi::Runtime &rt, decltype(types.id) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String titleToJs(jsi::Runtime &rt, decltype(types.title) value) {
    return bridging::toJs(rt, value);
  }

  static double countToJs(jsi::Runtime &rt, decltype(types.count) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String typeToJs(jsi::Runtime &rt, decltype(types.type) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String subtypeToJs(jsi::Runtime &rt, decltype(types.subtype) value) {
    return bridging::toJs(rt, value);
  }
#endif

  static jsi::Object toJs(
      jsi::Runtime &rt,
      const T &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    auto result = facebook::jsi::Object(rt);
    result.setProperty(rt, "id", bridging::toJs(rt, value.id, jsInvoker));
    result.setProperty(rt, "title", bridging::toJs(rt, value.title, jsInvoker));
    result.setProperty(rt, "count", bridging::toJs(rt, value.count, jsInvoker));
    result.setProperty(rt, "type", bridging::toJs(rt, value.type, jsInvoker));
    if (value.subtype) {
      result.setProperty(rt, "subtype", bridging::toJs(rt, value.subtype.value(), jsInvoker));
    }
    return result;
  }
};



#pragma mark - NativeCameraRollModulePhotoIdentifier

template <typename P0>
struct NativeCameraRollModulePhotoIdentifier {
  P0 node;
  bool operator==(const NativeCameraRollModulePhotoIdentifier &other) const {
    return node == other.node;
  }
};

template <typename T>
struct NativeCameraRollModulePhotoIdentifierBridging {
  static T types;

  static T fromJs(
      jsi::Runtime &rt,
      const jsi::Object &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    T result{
      bridging::fromJs<decltype(types.node)>(rt, value.getProperty(rt, "node"), jsInvoker)};
    return result;
  }

#ifdef DEBUG
  static jsi::Object nodeToJs(jsi::Runtime &rt, decltype(types.node) value) {
    return bridging::toJs(rt, value);
  }
#endif

  static jsi::Object toJs(
      jsi::Runtime &rt,
      const T &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    auto result = facebook::jsi::Object(rt);
    result.setProperty(rt, "node", bridging::toJs(rt, value.node, jsInvoker));
    return result;
  }
};



#pragma mark - NativeCameraRollModulePhotoIdentifiersPage

template <typename P0, typename P1, typename P2>
struct NativeCameraRollModulePhotoIdentifiersPage {
  P0 edges;
  P1 page_info;
  P2 limited;
  bool operator==(const NativeCameraRollModulePhotoIdentifiersPage &other) const {
    return edges == other.edges && page_info == other.page_info && limited == other.limited;
  }
};

template <typename T>
struct NativeCameraRollModulePhotoIdentifiersPageBridging {
  static T types;

  static T fromJs(
      jsi::Runtime &rt,
      const jsi::Object &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    T result{
      bridging::fromJs<decltype(types.edges)>(rt, value.getProperty(rt, "edges"), jsInvoker),
      bridging::fromJs<decltype(types.page_info)>(rt, value.getProperty(rt, "page_info"), jsInvoker),
      bridging::fromJs<decltype(types.limited)>(rt, value.getProperty(rt, "limited"), jsInvoker)};
    return result;
  }

#ifdef DEBUG
  static jsi::Array edgesToJs(jsi::Runtime &rt, decltype(types.edges) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::Object page_infoToJs(jsi::Runtime &rt, decltype(types.page_info) value) {
    return bridging::toJs(rt, value);
  }

  static bool limitedToJs(jsi::Runtime &rt, decltype(types.limited) value) {
    return bridging::toJs(rt, value);
  }
#endif

  static jsi::Object toJs(
      jsi::Runtime &rt,
      const T &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    auto result = facebook::jsi::Object(rt);
    result.setProperty(rt, "edges", bridging::toJs(rt, value.edges, jsInvoker));
    result.setProperty(rt, "page_info", bridging::toJs(rt, value.page_info, jsInvoker));
    if (value.limited) {
      result.setProperty(rt, "limited", bridging::toJs(rt, value.limited.value(), jsInvoker));
    }
    return result;
  }
};

class JSI_EXPORT NativeCameraRollModuleCxxSpecJSI : public TurboModule {
protected:
  NativeCameraRollModuleCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

public:
  virtual jsi::Value saveToCameraRoll(jsi::Runtime &rt, jsi::String uri, jsi::Object options) = 0;
  virtual jsi::Value getPhotos(jsi::Runtime &rt, jsi::Object params) = 0;
  virtual jsi::Value getAlbums(jsi::Runtime &rt, jsi::Object params) = 0;
  virtual jsi::Value deletePhotos(jsi::Runtime &rt, jsi::Array photoUris) = 0;
  virtual jsi::Value getPhotoByInternalID(jsi::Runtime &rt, jsi::String internalID, jsi::Object options) = 0;
  virtual jsi::Value getPhotoThumbnail(jsi::Runtime &rt, jsi::String internalID, jsi::Object options) = 0;
  virtual void addListener(jsi::Runtime &rt, jsi::String eventName) = 0;
  virtual void removeListeners(jsi::Runtime &rt, double count) = 0;

};

template <typename T>
class JSI_EXPORT NativeCameraRollModuleCxxSpec : public TurboModule {
public:
  jsi::Value create(jsi::Runtime &rt, const jsi::PropNameID &propName) override {
    return delegate_.create(rt, propName);
  }

  std::vector<jsi::PropNameID> getPropertyNames(jsi::Runtime& runtime) override {
    return delegate_.getPropertyNames(runtime);
  }

  static constexpr std::string_view kModuleName = "RNCCameraRoll";

protected:
  NativeCameraRollModuleCxxSpec(std::shared_ptr<CallInvoker> jsInvoker)
    : TurboModule(std::string{NativeCameraRollModuleCxxSpec::kModuleName}, jsInvoker),
      delegate_(reinterpret_cast<T*>(this), jsInvoker) {}


private:
  class Delegate : public NativeCameraRollModuleCxxSpecJSI {
  public:
    Delegate(T *instance, std::shared_ptr<CallInvoker> jsInvoker) :
      NativeCameraRollModuleCxxSpecJSI(std::move(jsInvoker)), instance_(instance) {

    }

    jsi::Value saveToCameraRoll(jsi::Runtime &rt, jsi::String uri, jsi::Object options) override {
      static_assert(
          bridging::getParameterCount(&T::saveToCameraRoll) == 3,
          "Expected saveToCameraRoll(...) to have 3 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::saveToCameraRoll, jsInvoker_, instance_, std::move(uri), std::move(options));
    }
    jsi::Value getPhotos(jsi::Runtime &rt, jsi::Object params) override {
      static_assert(
          bridging::getParameterCount(&T::getPhotos) == 2,
          "Expected getPhotos(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::getPhotos, jsInvoker_, instance_, std::move(params));
    }
    jsi::Value getAlbums(jsi::Runtime &rt, jsi::Object params) override {
      static_assert(
          bridging::getParameterCount(&T::getAlbums) == 2,
          "Expected getAlbums(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::getAlbums, jsInvoker_, instance_, std::move(params));
    }
    jsi::Value deletePhotos(jsi::Runtime &rt, jsi::Array photoUris) override {
      static_assert(
          bridging::getParameterCount(&T::deletePhotos) == 2,
          "Expected deletePhotos(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::deletePhotos, jsInvoker_, instance_, std::move(photoUris));
    }
    jsi::Value getPhotoByInternalID(jsi::Runtime &rt, jsi::String internalID, jsi::Object options) override {
      static_assert(
          bridging::getParameterCount(&T::getPhotoByInternalID) == 3,
          "Expected getPhotoByInternalID(...) to have 3 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::getPhotoByInternalID, jsInvoker_, instance_, std::move(internalID), std::move(options));
    }
    jsi::Value getPhotoThumbnail(jsi::Runtime &rt, jsi::String internalID, jsi::Object options) override {
      static_assert(
          bridging::getParameterCount(&T::getPhotoThumbnail) == 3,
          "Expected getPhotoThumbnail(...) to have 3 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::getPhotoThumbnail, jsInvoker_, instance_, std::move(internalID), std::move(options));
    }
    void addListener(jsi::Runtime &rt, jsi::String eventName) override {
      static_assert(
          bridging::getParameterCount(&T::addListener) == 2,
          "Expected addListener(...) to have 2 parameters");

      return bridging::callFromJs<void>(
          rt, &T::addListener, jsInvoker_, instance_, std::move(eventName));
    }
    void removeListeners(jsi::Runtime &rt, double count) override {
      static_assert(
          bridging::getParameterCount(&T::removeListeners) == 2,
          "Expected removeListeners(...) to have 2 parameters");

      return bridging::callFromJs<void>(
          rt, &T::removeListeners, jsInvoker_, instance_, std::move(count));
    }

  private:
    friend class NativeCameraRollModuleCxxSpec;
    T *instance_;
  };

  Delegate delegate_;
};


  class JSI_EXPORT NativeCameraRollPermissionModuleCxxSpecJSI : public TurboModule {
protected:
  NativeCameraRollPermissionModuleCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

public:
  virtual jsi::Value checkPermission(jsi::Runtime &rt, jsi::String content) = 0;
  virtual jsi::Value requestReadWritePermission(jsi::Runtime &rt) = 0;
  virtual jsi::Value requestAddOnlyPermission(jsi::Runtime &rt) = 0;
  virtual jsi::Value refreshPhotoSelection(jsi::Runtime &rt) = 0;
  virtual void addListener(jsi::Runtime &rt, jsi::String eventName) = 0;
  virtual void removeListeners(jsi::Runtime &rt, double count) = 0;

};

template <typename T>
class JSI_EXPORT NativeCameraRollPermissionModuleCxxSpec : public TurboModule {
public:
  jsi::Value create(jsi::Runtime &rt, const jsi::PropNameID &propName) override {
    return delegate_.create(rt, propName);
  }

  std::vector<jsi::PropNameID> getPropertyNames(jsi::Runtime& runtime) override {
    return delegate_.getPropertyNames(runtime);
  }

  static constexpr std::string_view kModuleName = "RNCCameraRollPermission";

protected:
  NativeCameraRollPermissionModuleCxxSpec(std::shared_ptr<CallInvoker> jsInvoker)
    : TurboModule(std::string{NativeCameraRollPermissionModuleCxxSpec::kModuleName}, jsInvoker),
      delegate_(reinterpret_cast<T*>(this), jsInvoker) {}


private:
  class Delegate : public NativeCameraRollPermissionModuleCxxSpecJSI {
  public:
    Delegate(T *instance, std::shared_ptr<CallInvoker> jsInvoker) :
      NativeCameraRollPermissionModuleCxxSpecJSI(std::move(jsInvoker)), instance_(instance) {

    }

    jsi::Value checkPermission(jsi::Runtime &rt, jsi::String content) override {
      static_assert(
          bridging::getParameterCount(&T::checkPermission) == 2,
          "Expected checkPermission(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::checkPermission, jsInvoker_, instance_, std::move(content));
    }
    jsi::Value requestReadWritePermission(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::requestReadWritePermission) == 1,
          "Expected requestReadWritePermission(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::requestReadWritePermission, jsInvoker_, instance_);
    }
    jsi::Value requestAddOnlyPermission(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::requestAddOnlyPermission) == 1,
          "Expected requestAddOnlyPermission(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::requestAddOnlyPermission, jsInvoker_, instance_);
    }
    jsi::Value refreshPhotoSelection(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::refreshPhotoSelection) == 1,
          "Expected refreshPhotoSelection(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::refreshPhotoSelection, jsInvoker_, instance_);
    }
    void addListener(jsi::Runtime &rt, jsi::String eventName) override {
      static_assert(
          bridging::getParameterCount(&T::addListener) == 2,
          "Expected addListener(...) to have 2 parameters");

      return bridging::callFromJs<void>(
          rt, &T::addListener, jsInvoker_, instance_, std::move(eventName));
    }
    void removeListeners(jsi::Runtime &rt, double count) override {
      static_assert(
          bridging::getParameterCount(&T::removeListeners) == 2,
          "Expected removeListeners(...) to have 2 parameters");

      return bridging::callFromJs<void>(
          rt, &T::removeListeners, jsInvoker_, instance_, std::move(count));
    }

  private:
    friend class NativeCameraRollPermissionModuleCxxSpec;
    T *instance_;
  };

  Delegate delegate_;
};

} // namespace facebook::react
