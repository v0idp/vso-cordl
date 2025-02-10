#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/AndroidByteArrayCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidByteArrayCallback)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AndroidJavaObject;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class AndroidByteArrayCallback;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::AndroidByteArrayCallback);
// Dependencies UnityEngine.AndroidJavaProxy
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.AndroidByteArrayCallback
class CORDL_TYPE AndroidByteArrayCallback : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief Field _callback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__callback, put=__cordl_internal_set__callback)) ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  _callback;

static inline ::Vuplex::WebView::Internal::AndroidByteArrayCallback* New_ctor(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback) ;

constexpr ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>* const& __cordl_internal_get__callback() const;

constexpr ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*& __cordl_internal_get__callback() ;

constexpr void __cordl_internal_set__callback(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  value) ;

/// @brief Method .ctor, addr 0x16e6080, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  callback) ;

/// @brief Method callback, addr 0x16e6104, size 0xd8, virtual false, abstract: false, final false
inline void callback(::UnityEngine::AndroidJavaObject*  result) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidByteArrayCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidByteArrayCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidByteArrayCallback(AndroidByteArrayCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidByteArrayCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidByteArrayCallback(AndroidByteArrayCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{212};

/// @brief Field _callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::ArrayW<uint8_t,::Array<uint8_t>*>>*  ____callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::AndroidByteArrayCallback, ____callback) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::AndroidByteArrayCallback, 0x28>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::AndroidByteArrayCallback);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::AndroidByteArrayCallback*, "Vuplex.WebView.Internal", "AndroidByteArrayCallback");
