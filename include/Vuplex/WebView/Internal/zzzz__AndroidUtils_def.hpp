#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidUtils)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class AndroidJavaClass;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class AndroidUtils;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidUtils);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidUtils
class CORDL_TYPE AndroidUtils : public ::System::Object {
public:
// Declarations
/// @brief Field _androidJavaObjectIntPtrConstructor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__androidJavaObjectIntPtrConstructor, put=setStaticF__androidJavaObjectIntPtrConstructor)) ::System::Reflection::ConstructorInfo*  _androidJavaObjectIntPtrConstructor;

/// @brief Field _unityPlayerClass, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unityPlayerClass, put=setStaticF__unityPlayerClass)) ::UnityEngine::AndroidJavaClass*  _unityPlayerClass;

/// @brief Method AssertMainThread, addr 0x16e74e0, size 0x138, virtual false, abstract: false, final false
static inline void AssertMainThread(::StringW  methodName) ;

/// @brief Method ConvertFromJavaByteArray, addr 0x16e61dc, size 0x94, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ConvertFromJavaByteArray(::UnityEngine::AndroidJavaObject*  arrayObject) ;

/// @brief Method CreateAndroidMaterial, addr 0x16e7618, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> CreateAndroidMaterial() ;

/// @brief Method DeviceIsMetaQuest, addr 0x16e76cc, size 0x4c, virtual false, abstract: false, final false
static inline bool DeviceIsMetaQuest() ;

/// @brief Method RunOnAndroidUIThread, addr 0x16e7718, size 0x134, virtual false, abstract: false, final false
static inline void RunOnAndroidUIThread(::System::Action*  function) ;

/// @brief Method ThrowVulkanExtensionException, addr 0x16d48f8, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowVulkanExtensionException() ;

/// @brief Method ToJavaMap, addr 0x16e7954, size 0x34c, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* ToJavaMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  dictionary) ;

/// @brief Method ToJavaObject, addr 0x16e7ca0, size 0x164, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* ToJavaObject(::System::IntPtr  jobject) ;

/// @brief Method _getActivity, addr 0x16e784c, size 0x108, virtual false, abstract: false, final false
static inline ::UnityEngine::AndroidJavaObject* _getActivity() ;

static inline ::System::Reflection::ConstructorInfo* getStaticF__androidJavaObjectIntPtrConstructor() ;

static inline ::UnityEngine::AndroidJavaClass* getStaticF__unityPlayerClass() ;

static inline void setStaticF__androidJavaObjectIntPtrConstructor(::System::Reflection::ConstructorInfo*  value) ;

static inline void setStaticF__unityPlayerClass(::UnityEngine::AndroidJavaClass*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidUtils(AndroidUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidUtils(AndroidUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{225};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidUtils, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidUtils);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidUtils*, "Vuplex.WebView.Internal", "AndroidUtils");
