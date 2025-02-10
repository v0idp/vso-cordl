#pragma once
// IWYU pragma private; include "VROSC/MultiplyBySignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__IntChanger_def.hpp"
CORDL_MODULE_EXPORT(MultiplyBySignal)
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class MultiplyBySignal;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::MultiplyBySignal);
// Dependencies VROSC.IntChanger
namespace VROSC {
// Is value type: false
// CS Name: VROSC.MultiplyBySignal
class CORDL_TYPE MultiplyBySignal : public ::VROSC::IntChanger {
public:
// Declarations
static inline ::VROSC::MultiplyBySignal* New_ctor() ;

/// @brief Method SetValueBySignal, addr 0x171ab98, size 0x110, virtual true, abstract: false, final false
inline void SetValueBySignal(::VROSC::Signal*  signal) ;

/// @brief Method .ctor, addr 0x171aca8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiplyBySignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiplyBySignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplyBySignal(MultiplyBySignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplyBySignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplyBySignal(MultiplyBySignal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{934};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VROSC::MultiplyBySignal, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::MultiplyBySignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::MultiplyBySignal*, "VROSC", "MultiplyBySignal");
