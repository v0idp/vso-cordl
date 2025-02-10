#pragma once
// IWYU pragma private; include "VROSC/DelaySignal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VROSC/zzzz__SignalNode_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DelaySignal)
namespace VROSC {
class Signal;
}
// Forward declare root types
namespace VROSC {
class DelaySignal;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::DelaySignal);
// Dependencies VROSC.SignalNode
namespace VROSC {
// Is value type: false
// CS Name: VROSC.DelaySignal
class CORDL_TYPE DelaySignal : public ::VROSC::SignalNode {
public:
// Declarations
/// @brief Field _delayTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayTime, put=__cordl_internal_set__delayTime)) float_t  _delayTime;

/// @brief Field _signalTimer, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__signalTimer, put=__cordl_internal_set__signalTimer)) float_t  _signalTimer;

static inline ::VROSC::DelaySignal* New_ctor() ;

/// @brief Method NodeBegin, addr 0x1721430, size 0x18, virtual true, abstract: false, final false
inline void NodeBegin(::VROSC::Signal*  signal) ;

/// @brief Method NodeEnd, addr 0x1721488, size 0x8, virtual true, abstract: false, final false
inline void NodeEnd(::VROSC::Signal*  signal) ;

/// @brief Method NodeStay, addr 0x1721448, size 0x40, virtual true, abstract: false, final false
inline void NodeStay(::VROSC::Signal*  signal) ;

constexpr float_t const& __cordl_internal_get__delayTime() const;

constexpr float_t& __cordl_internal_get__delayTime() ;

constexpr float_t const& __cordl_internal_get__signalTimer() const;

constexpr float_t& __cordl_internal_get__signalTimer() ;

constexpr void __cordl_internal_set__delayTime(float_t  value) ;

constexpr void __cordl_internal_set__signalTimer(float_t  value) ;

/// @brief Method .ctor, addr 0x1721490, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelaySignal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelaySignal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DelaySignal(DelaySignal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelaySignal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelaySignal(DelaySignal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{981};

/// @brief Field _delayTime, offset: 0x48, size: 0x4, def value: None
 float_t  ____delayTime;

/// @brief Field _signalTimer, offset: 0x4c, size: 0x4, def value: None
 float_t  ____signalTimer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::DelaySignal, ____delayTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::VROSC::DelaySignal, ____signalTimer) == 0x4c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::DelaySignal, 0x50>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::DelaySignal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::DelaySignal*, "VROSC", "DelaySignal");
