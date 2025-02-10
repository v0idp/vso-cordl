#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/LabelAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LabelAttribute)
// Forward declare root types
namespace Vuplex::WebView::Internal {
class LabelAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Vuplex::WebView::Internal::LabelAttribute);
// Dependencies UnityEngine.PropertyAttribute
namespace Vuplex::WebView::Internal {
// Is value type: false
// CS Name: Vuplex.WebView.Internal.LabelAttribute
class CORDL_TYPE LabelAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
 __declspec(property(get=get_Label, put=set_Label)) ::StringW  Label;

/// @brief Field <Label>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Label_k__BackingField, put=__cordl_internal_set__Label_k__BackingField)) ::StringW  _Label_k__BackingField;

static inline ::Vuplex::WebView::Internal::LabelAttribute* New_ctor(::StringW  label) ;

constexpr ::StringW const& __cordl_internal_get__Label_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Label_k__BackingField() ;

constexpr void __cordl_internal_set__Label_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x17beb50, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  label) ;

/// @brief Method get_Label, addr 0x17beb40, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Label() ;

/// @brief Method set_Label, addr 0x17beb48, size 0x8, virtual false, abstract: false, final false
inline void set_Label(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LabelAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LabelAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LabelAttribute(LabelAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LabelAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LabelAttribute(LabelAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{251};

/// @brief Field <Label>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Label_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Vuplex::WebView::Internal::LabelAttribute, ____Label_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Vuplex::WebView::Internal::LabelAttribute, 0x18>, "Size mismatch!");

} // namespace end def Vuplex::WebView::Internal
NEED_NO_BOX(::Vuplex::WebView::Internal::LabelAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Vuplex::WebView::Internal::LabelAttribute*, "Vuplex.WebView.Internal", "LabelAttribute");
