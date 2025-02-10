#pragma once
// IWYU pragma private; include "VROSC/TooltipData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "VROSC/zzzz__HighlightControllerComponents_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TooltipData)
namespace VROSC::UI {
class IconData;
}
namespace VROSC {
struct HighlightControllerComponents_Component;
}
// Forward declare root types
namespace VROSC {
class TooltipData;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::TooltipData);
// Dependencies System.Object, VROSC.HighlightControllerComponents::Component
namespace VROSC {
// Is value type: false
// CS Name: VROSC.TooltipData
class CORDL_TYPE TooltipData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Component)) ::VROSC::HighlightControllerComponents_Component  Component;

 __declspec(property(get=get_IconData)) ::UnityW<::VROSC::UI::IconData>  IconData;

 __declspec(property(get=get_Text)) ::StringW  Text;

/// @brief Field _component, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__component, put=__cordl_internal_set__component)) ::VROSC::HighlightControllerComponents_Component  _component;

/// @brief Field _iconData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__iconData, put=__cordl_internal_set__iconData)) ::UnityW<::VROSC::UI::IconData>  _iconData;

/// @brief Field _text, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__text, put=__cordl_internal_set__text)) ::StringW  _text;

static inline ::VROSC::TooltipData* New_ctor(::VROSC::HighlightControllerComponents_Component  component, ::StringW  text) ;

static inline ::VROSC::TooltipData* New_ctor(::VROSC::HighlightControllerComponents_Component  component, ::StringW  text, ::VROSC::UI::IconData*  iconData) ;

constexpr ::VROSC::HighlightControllerComponents_Component const& __cordl_internal_get__component() const;

constexpr ::VROSC::HighlightControllerComponents_Component& __cordl_internal_get__component() ;

constexpr ::UnityW<::VROSC::UI::IconData> const& __cordl_internal_get__iconData() const;

constexpr ::UnityW<::VROSC::UI::IconData>& __cordl_internal_get__iconData() ;

constexpr ::StringW const& __cordl_internal_get__text() const;

constexpr ::StringW& __cordl_internal_get__text() ;

constexpr void __cordl_internal_set__component(::VROSC::HighlightControllerComponents_Component  value) ;

constexpr void __cordl_internal_set__iconData(::UnityW<::VROSC::UI::IconData>  value) ;

constexpr void __cordl_internal_set__text(::StringW  value) ;

/// @brief Method .ctor, addr 0x172e7e8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::VROSC::HighlightControllerComponents_Component  component, ::StringW  text) ;

/// @brief Method .ctor, addr 0x1734f04, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::VROSC::HighlightControllerComponents_Component  component, ::StringW  text, ::VROSC::UI::IconData*  iconData) ;

/// @brief Method get_Component, addr 0x1734ef4, size 0x8, virtual false, abstract: false, final false
inline ::VROSC::HighlightControllerComponents_Component get_Component() ;

/// @brief Method get_IconData, addr 0x1734efc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::VROSC::UI::IconData> get_IconData() ;

/// @brief Method get_Text, addr 0x1734eec, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TooltipData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TooltipData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TooltipData(TooltipData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TooltipData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TooltipData(TooltipData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1077};

/// @brief Field _text, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____text;

/// @brief Field _component, offset: 0x18, size: 0x4, def value: None
 ::VROSC::HighlightControllerComponents_Component  ____component;

/// @brief Field _iconData, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::VROSC::UI::IconData>  ____iconData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::TooltipData, ____text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::TooltipData, ____component) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::TooltipData, ____iconData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::TooltipData, 0x28>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::TooltipData);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::TooltipData*, "VROSC", "TooltipData");
