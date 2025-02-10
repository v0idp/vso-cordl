#pragma once
// IWYU pragma private; include "VROSC/BypassStateFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalFilter_def.hpp"
CORDL_MODULE_EXPORT(BypassStateFilter)
namespace VROSC {
class SignalNode;
}
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class BypassStateFilter;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::BypassStateFilter);
// Dependencies VROSC.SignalFilter
namespace VROSC {
// Is value type: false
// CS Name: VROSC.BypassStateFilter
class CORDL_TYPE BypassStateFilter : public ::VROSC::SignalFilter {
public:
// Declarations
/// @brief Field _passOnFalse, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__passOnFalse, put=__cordl_internal_set__passOnFalse)) bool  _passOnFalse;

/// @brief Field _signalNodeToCheck, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__signalNodeToCheck, put=__cordl_internal_set__signalNodeToCheck)) ::UnityW<::VROSC::SignalNode>  _signalNodeToCheck;

/// @brief Method FilterSignal, addr 0x17213f4, size 0x2c, virtual true, abstract: false, final false
inline void FilterSignal(::VROSC::Signal*  signal) ;

static inline ::VROSC::BypassStateFilter* New_ctor() ;

constexpr bool const& __cordl_internal_get__passOnFalse() const;

constexpr bool& __cordl_internal_get__passOnFalse() ;

constexpr ::UnityW<::VROSC::SignalNode> const& __cordl_internal_get__signalNodeToCheck() const;

constexpr ::UnityW<::VROSC::SignalNode>& __cordl_internal_get__signalNodeToCheck() ;

constexpr void __cordl_internal_set__passOnFalse(bool  value) ;

constexpr void __cordl_internal_set__signalNodeToCheck(::UnityW<::VROSC::SignalNode>  value) ;

/// @brief Method .ctor, addr 0x1721420, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BypassStateFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BypassStateFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BypassStateFilter(BypassStateFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BypassStateFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BypassStateFilter(BypassStateFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{980};

/// @brief Field _signalNodeToCheck, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::VROSC::SignalNode>  ____signalNodeToCheck;

/// @brief Field _passOnFalse, offset: 0x50, size: 0x1, def value: None
 bool  ____passOnFalse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::BypassStateFilter, ____signalNodeToCheck) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::BypassStateFilter, ____passOnFalse) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::BypassStateFilter, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::BypassStateFilter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::BypassStateFilter*, "VROSC", "BypassStateFilter");
