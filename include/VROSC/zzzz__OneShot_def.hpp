#pragma once
// IWYU pragma private; include "VROSC/OneShot.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalFilter_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OneShot)
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class OneShot;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::OneShot);
// Dependencies VROSC.SignalFilter
namespace VROSC {
// Is value type: false
// CS Name: VROSC.OneShot
class CORDL_TYPE OneShot : public ::VROSC::SignalFilter {
public:
// Declarations
/// @brief Field _currentSignalTime, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSignalTime, put=__cordl_internal_set__currentSignalTime)) float_t  _currentSignalTime;

/// @brief Field _signalDuration, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__signalDuration, put=__cordl_internal_set__signalDuration)) float_t  _signalDuration;

/// @brief Method FilterSignal, addr 0x1721980, size 0x14, virtual true, abstract: false, final false
inline void FilterSignal(::VROSC::Signal*  signal) ;

static inline ::VROSC::OneShot* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1721900, size 0x14, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1721924, size 0x4c, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

constexpr float_t const& __cordl_internal_get__currentSignalTime() const;

constexpr float_t& __cordl_internal_get__currentSignalTime() ;

constexpr float_t const& __cordl_internal_get__signalDuration() const;

constexpr float_t& __cordl_internal_get__signalDuration() ;

constexpr void __cordl_internal_set__currentSignalTime(float_t  value) ;

constexpr void __cordl_internal_set__signalDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x1721994, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OneShot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OneShot", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OneShot(OneShot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OneShot", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OneShot(OneShot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{988};

/// @brief Field _signalDuration, offset: 0x48, size: 0x4, def value: None
 float_t  ____signalDuration;

/// @brief Field _currentSignalTime, offset: 0x4c, size: 0x4, def value: None
 float_t  ____currentSignalTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::OneShot, ____signalDuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::OneShot, ____currentSignalTime) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::OneShot, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::OneShot);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::OneShot*, "VROSC", "OneShot");
