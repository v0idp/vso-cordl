#pragma once
// IWYU pragma private; include "VROSC/SignalOnce.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalFilter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignalOnce)
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class SignalOnce;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::SignalOnce);
// Dependencies VROSC.SignalFilter
namespace VROSC {
// Is value type: false
// CS Name: VROSC.SignalOnce
class CORDL_TYPE SignalOnce : public ::VROSC::SignalFilter {
public:
// Declarations
/// @brief Field _triggerTimes, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__triggerTimes, put=__cordl_internal_set__triggerTimes)) int32_t  _triggerTimes;

/// @brief Method FilterSignal, addr 0x1721a84, size 0x14, virtual true, abstract: false, final false
inline void FilterSignal(::VROSC::Signal*  signal) ;

static inline ::VROSC::SignalOnce* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1721a68, size 0x1c, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

constexpr int32_t const& __cordl_internal_get__triggerTimes() const;

constexpr int32_t& __cordl_internal_get__triggerTimes() ;

constexpr void __cordl_internal_set__triggerTimes(int32_t  value) ;

/// @brief Method .ctor, addr 0x1721a98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SignalOnce() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SignalOnce", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalOnce(SignalOnce && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalOnce", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalOnce(SignalOnce const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{992};

/// @brief Field _triggerTimes, offset: 0x48, size: 0x4, def value: None
 int32_t  ____triggerTimes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::SignalOnce, ____triggerTimes) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::SignalOnce, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::SignalOnce);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::SignalOnce*, "VROSC", "SignalOnce");
