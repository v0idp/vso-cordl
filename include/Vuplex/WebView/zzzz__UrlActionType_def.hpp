#pragma once
// IWYU pragma private; include "Vuplex/WebView/UrlActionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UrlActionType)
// Forward declare root types
namespace Vuplex::WebView {
class UrlActionType;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::UrlActionType);
// Dependencies System.Object
namespace Vuplex::WebView {
// Is value type: false
// CS Name: Vuplex.WebView.UrlActionType
class CORDL_TYPE UrlActionType : public ::System::Object {
public:
// Declarations
/// @brief Field HashChange, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HashChange, put=setStaticF_HashChange)) ::StringW  HashChange;

/// @brief Field Load, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Load, put=setStaticF_Load)) ::StringW  Load;

/// @brief Field PushState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PushState, put=setStaticF_PushState)) ::StringW  PushState;

/// @brief Field ReplaceState, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReplaceState, put=setStaticF_ReplaceState)) ::StringW  ReplaceState;

static inline ::Vuplex::WebView::UrlActionType* New_ctor() ;

/// @brief Method .ctor, addr 0x16e3bb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_HashChange() ;

static inline ::StringW getStaticF_Load() ;

static inline ::StringW getStaticF_PushState() ;

static inline ::StringW getStaticF_ReplaceState() ;

static inline void setStaticF_HashChange(::StringW  value) ;

static inline void setStaticF_Load(::StringW  value) ;

static inline void setStaticF_PushState(::StringW  value) ;

static inline void setStaticF_ReplaceState(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UrlActionType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UrlActionType", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UrlActionType(UrlActionType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UrlActionType", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UrlActionType(UrlActionType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{191};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::UrlActionType, 0x10>, "Size mismatch!");

} // namespace end def Vuplex::WebView
NEED_NO_BOX(::Vuplex::WebView::UrlActionType);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::UrlActionType*, "Vuplex.WebView", "UrlActionType");
