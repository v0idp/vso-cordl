#pragma once
// IWYU pragma private; include "VROSC/SelectionBar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__UIScrollableContainer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SelectionBar)
// Forward declare root types
namespace VROSC {
class SelectionBar;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SelectionBar);
// Dependencies VROSC.UIScrollableContainer
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SelectionBar
class CORDL_TYPE SelectionBar : public ::VROSC::UIScrollableContainer {
public:
// Declarations
/// @brief Field _values, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<::StringW,::Array<::StringW>*>  _values;

/// @brief Method Awake, addr 0x1749c6c, size 0x3c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::VROSC::SelectionBar* New_ctor() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get__values() ;

constexpr void __cordl_internal_set__values(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method .ctor, addr 0x1749ca8, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SelectionBar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SelectionBar", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectionBar(SelectionBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectionBar", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectionBar(SelectionBar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1134};

/// @brief Field _values, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SelectionBar, ____values) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SelectionBar, 0x80>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SelectionBar);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SelectionBar*, "VROSC", "SelectionBar");
