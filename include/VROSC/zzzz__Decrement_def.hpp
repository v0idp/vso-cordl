#pragma once
// IWYU pragma private; include "VROSC/Decrement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__IntChanger_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Decrement)
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class Decrement;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Decrement);
// Dependencies VROSC.IntChanger
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Decrement
class CORDL_TYPE Decrement : public ::VROSC::IntChanger {
public:
// Declarations
/// @brief Field _amount, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__amount, put=__cordl_internal_set__amount)) int32_t  _amount;

static inline ::VROSC::Decrement* New_ctor() ;

/// @brief Method SetValueBySignal, addr 0x171a584, size 0x30, virtual true, abstract: false, final false
inline void SetValueBySignal(::VROSC::Signal*  signal) ;

constexpr int32_t const& __cordl_internal_get__amount() const;

constexpr int32_t& __cordl_internal_get__amount() ;

constexpr void __cordl_internal_set__amount(int32_t  value) ;

/// @brief Method .ctor, addr 0x171a5c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Decrement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Decrement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Decrement(Decrement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Decrement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Decrement(Decrement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{925};

/// @brief Field _amount, offset: 0x54, size: 0x4, def value: None
 int32_t  ____amount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Decrement, ____amount) == 0x54, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Decrement, 0x58>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Decrement);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Decrement*, "VROSC", "Decrement");
