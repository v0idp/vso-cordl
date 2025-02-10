#pragma once
// IWYU pragma private; include "VROSC/HandTypeFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__HandType_def.hpp"
#include "VROSC/zzzz__SignalFilter_def.hpp"
CORDL_MODULE_EXPORT(HandTypeFilter)
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class HandTypeFilter;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::HandTypeFilter);
// Dependencies VROSC.HandType, VROSC.SignalFilter
namespace VROSC {
// Is value type: false
// CS Name: VROSC.HandTypeFilter
class CORDL_TYPE HandTypeFilter : public ::VROSC::SignalFilter {
public:
// Declarations
/// @brief Field _allowType, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__allowType, put=__cordl_internal_set__allowType)) ::VROSC::HandType  _allowType;

/// @brief Method FilterSignal, addr 0x17216b4, size 0x38, virtual true, abstract: false, final false
inline void FilterSignal(::VROSC::Signal*  signal) ;

static inline ::VROSC::HandTypeFilter* New_ctor() ;

constexpr ::VROSC::HandType const& __cordl_internal_get__allowType() const;

constexpr ::VROSC::HandType& __cordl_internal_get__allowType() ;

constexpr void __cordl_internal_set__allowType(::VROSC::HandType  value) ;

/// @brief Method .ctor, addr 0x17216ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTypeFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTypeFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTypeFilter(HandTypeFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTypeFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTypeFilter(HandTypeFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{984};

/// @brief Field _allowType, offset: 0x48, size: 0x4, def value: None
 ::VROSC::HandType  ____allowType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::HandTypeFilter, ____allowType) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::HandTypeFilter, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::HandTypeFilter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::HandTypeFilter*, "VROSC", "HandTypeFilter");
