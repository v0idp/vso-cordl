#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/CursorHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CursorHelper)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Texture2D;
}
namespace Vuplex::WebView::Internal {
class CursorHelper_CursorInfo;
}
// Forward declare root types
namespace Vuplex::WebView::Internal {
class CursorHelper;
}
namespace Vuplex::WebView::Internal {
class CursorHelper_CursorInfo;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::CursorHelper);
MARK_REF_PTR_T(::Vuplex::WebView::Internal::CursorHelper_CursorInfo);
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.CursorHelper/CursorInfo
class CORDL_TYPE CursorHelper_CursorInfo : public ::System::Object {
public:
// Declarations
/// @brief Field Centered, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Centered, put=__cordl_internal_set_Centered)) bool  Centered;

/// @brief Field Texture, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Texture, put=__cordl_internal_set_Texture)) ::UnityW<::UnityEngine::Texture2D>  Texture;

static inline ::Vuplex::WebView::Internal::CursorHelper_CursorInfo* New_ctor(bool  centered) ;

constexpr bool const& __cordl_internal_get_Centered() const;

constexpr bool& __cordl_internal_get_Centered() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_Texture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_Texture() ;

constexpr void __cordl_internal_set_Centered(bool  value) ;

constexpr void __cordl_internal_set_Texture(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x17bc978, size 0x28, virtual false, abstract: false, final false
inline void _ctor(bool  centered) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CursorHelper_CursorInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CursorHelper_CursorInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CursorHelper_CursorInfo(CursorHelper_CursorInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CursorHelper_CursorInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CursorHelper_CursorInfo(CursorHelper_CursorInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{241};

/// @brief Field Centered, offset: 0x10, size: 0x1, def value: None
 bool  ___Centered;

/// @brief Field Texture, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___Texture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::CursorHelper_CursorInfo, ___Centered) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Vuplex::WebView::Internal::CursorHelper_CursorInfo, ___Texture) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::CursorHelper_CursorInfo, 0x20>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
// Dependencies System.Object
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.CursorHelper
class CORDL_TYPE CursorHelper : public ::System::Object {
public:
// Declarations
using CursorInfo = ::Vuplex::WebView::Internal::CursorHelper_CursorInfo;

/// @brief Field _supportedCursors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__supportedCursors, put=setStaticF__supportedCursors)) ::System::Collections::Generic::Dictionary_2<::StringW,::Vuplex::WebView::Internal::CursorHelper_CursorInfo*>*  _supportedCursors;

/// @brief Method SetCursorIcon, addr 0x17bc68c, size 0x1a4, virtual false, abstract: false, final false
static inline void SetCursorIcon(::StringW  cursorType) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Vuplex::WebView::Internal::CursorHelper_CursorInfo*>* getStaticF__supportedCursors() ;

static inline void setStaticF__supportedCursors(::System::Collections::Generic::Dictionary_2<::StringW,::Vuplex::WebView::Internal::CursorHelper_CursorInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CursorHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CursorHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CursorHelper(CursorHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CursorHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CursorHelper(CursorHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{242};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::CursorHelper, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::CursorHelper);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::CursorHelper*, "Vuplex.WebView.Internal", "CursorHelper");
NEED_NO_BOX(::Vuplex::WebView::Internal::CursorHelper_CursorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::CursorHelper_CursorInfo*, "Vuplex.WebView.Internal", "CursorHelper/CursorInfo");
