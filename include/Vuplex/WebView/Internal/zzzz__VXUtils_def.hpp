#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/VXUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VXUtils)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
namespace Vuplex::WebView::Internal {
class VXUtils___c;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class VXUtils;
}
namespace Vuplex::WebView::Internal {
class VXUtils___c;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::VXUtils);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::VXUtils___c);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.VXUtils/<>c
class CORDL_TYPE VXUtils___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Vuplex::WebView::Internal::VXUtils___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Func_2<::UnityEngine::Rendering::GraphicsDeviceType,::StringW>*  __9__2_0;

static inline ::Vuplex::WebView::Internal::VXUtils___c* New_ctor() ;

/// @brief Method <GetGraphicsApiErrorMessage>b__2_0, addr 0x17c36a0, size 0x64, virtual false, abstract: false, final false
inline ::StringW _GetGraphicsApiErrorMessage_b__2_0(::UnityEngine::Rendering::GraphicsDeviceType  api) ;

/// @brief Method .ctor, addr 0x17c3698, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Vuplex::WebView::Internal::VXUtils___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::Rendering::GraphicsDeviceType,::StringW>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::Vuplex::WebView::Internal::VXUtils___c*  value) ;

static inline void setStaticF___9__2_0(::System::Func_2<::UnityEngine::Rendering::GraphicsDeviceType,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VXUtils___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VXUtils___c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VXUtils___c(VXUtils___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VXUtils___c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VXUtils___c(VXUtils___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{265};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::VXUtils___c, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.VXUtils
class CORDL_TYPE VXUtils : public ::System::Object {
public:
// Declarations
using __c = ::Vuplex::WebView::Internal::VXUtils___c;

/// @brief Method CreateDefaultMaterial, addr 0x17c3278, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> CreateDefaultMaterial() ;

/// @brief Method CreateDefaultTexture, addr 0x17c3314, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> CreateDefaultTexture(int32_t  width, int32_t  height) ;

/// @brief Method GetGraphicsApiErrorMessage, addr 0x17c33c4, size 0x1fc, virtual false, abstract: false, final false
static inline ::StringW GetGraphicsApiErrorMessage(::UnityEngine::Rendering::GraphicsDeviceType  activeGraphicsApi, ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType,::Array<::UnityEngine::Rendering::GraphicsDeviceType>*>  acceptableGraphicsApis) ;

/// @brief Method LogNative2DModeWarning, addr 0x17c35c0, size 0x7c, virtual false, abstract: false, final false
static inline void LogNative2DModeWarning(::StringW  methodName, ::StringW  effect) ;

/// @brief Method WarnIfAbnormallyLarge, addr 0x17bbde8, size 0xc0, virtual false, abstract: false, final false
static inline void WarnIfAbnormallyLarge(int32_t  width, int32_t  height) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VXUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VXUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VXUtils(VXUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VXUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VXUtils(VXUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{266};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::VXUtils, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::VXUtils);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::VXUtils*, "Vuplex.WebView.Internal", "VXUtils");
NEED_NO_BOX(::Vuplex::WebView::Internal::VXUtils___c);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::VXUtils___c*, "Vuplex.WebView.Internal", "VXUtils/<>c");
