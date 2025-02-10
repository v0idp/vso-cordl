#pragma once
// IWYU pragma private; include "VROSC/SignalFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
CORDL_MODULE_EXPORT(SignalFilter)
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class SignalFilter;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SignalFilter);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SignalFilter
class CORDL_TYPE SignalFilter : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Method FilterSignal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void FilterSignal(::VROSC::Signal*  signal) ;

static inline ::VROSC::SignalFilter* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1721914, size 0x10, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1721970, size 0x10, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

/// @brief Method .ctor, addr 0x1721428, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignalFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignalFilter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalFilter(SignalFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalFilter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalFilter(SignalFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{991};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::SignalFilter, 0x48>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SignalFilter);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalFilter*, "VROSC", "SignalFilter");
