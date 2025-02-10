#pragma once
// IWYU pragma private; include "VROSC/Signal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Signal)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace VROSC {
class SignalControllerInfo;
}
// Forward declare root types
namespace VROSC {
class Signal;
}
// Write type traits
MARK_REF_PTR_T(::VROSC::Signal);
// Dependencies System.Nullable`1<T>, System.Object
namespace VROSC {
// Is value type: false
// CS Name: VROSC.Signal
class CORDL_TYPE Signal : public ::System::Object {
public:
// Declarations
/// @brief Field ControllerInfo, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ControllerInfo, put=__cordl_internal_set_ControllerInfo)) ::VROSC::SignalControllerInfo*  ControllerInfo;

/// @brief Field FirstFrameOfSignal, offset 0x20, size 0x2 
 __declspec(property(get=__cordl_internal_get_FirstFrameOfSignal, put=__cordl_internal_set_FirstFrameOfSignal)) ::System::Nullable_1<bool>  FirstFrameOfSignal;

/// @brief Field PredictedDSPTime, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PredictedDSPTime, put=__cordl_internal_set_PredictedDSPTime)) double_t  PredictedDSPTime;

/// @brief Field Value, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) float_t  Value;

static inline ::VROSC::Signal* New_ctor(float_t  value, ::VROSC::SignalControllerInfo*  controllerInfo, ::System::Nullable_1<bool>  firstFrameOfSignal, double_t  predictedDspTime) ;

constexpr ::VROSC::SignalControllerInfo* const& __cordl_internal_get_ControllerInfo() const;

constexpr ::VROSC::SignalControllerInfo*& __cordl_internal_get_ControllerInfo() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_FirstFrameOfSignal() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_FirstFrameOfSignal() ;

constexpr double_t const& __cordl_internal_get_PredictedDSPTime() const;

constexpr double_t& __cordl_internal_get_PredictedDSPTime() ;

constexpr float_t const& __cordl_internal_get_Value() const;

constexpr float_t& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_ControllerInfo(::VROSC::SignalControllerInfo*  value) ;

constexpr void __cordl_internal_set_FirstFrameOfSignal(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_PredictedDSPTime(double_t  value) ;

constexpr void __cordl_internal_set_Value(float_t  value) ;

/// @brief Method .ctor, addr 0x1721330, size 0x48, virtual false, abstract: false, final false
inline void _ctor(float_t  value, ::VROSC::SignalControllerInfo*  controllerInfo, ::System::Nullable_1<bool>  firstFrameOfSignal, double_t  predictedDspTime) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Signal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Signal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Signal(Signal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Signal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Signal(Signal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{978};

/// @brief Field Value, offset: 0x10, size: 0x4, def value: None
 float_t  ___Value;

/// @brief Field ControllerInfo, offset: 0x18, size: 0x8, def value: None
 ::VROSC::SignalControllerInfo*  ___ControllerInfo;

/// @brief Field FirstFrameOfSignal, offset: 0x20, size: 0x2, def value: None
 ::System::Nullable_1<bool>  ___FirstFrameOfSignal;

/// @brief Field PredictedDSPTime, offset: 0x28, size: 0x8, def value: None
 double_t  ___PredictedDSPTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::VROSC::Signal, ___Value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::VROSC::Signal, ___ControllerInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::VROSC::Signal, ___FirstFrameOfSignal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::VROSC::Signal, ___PredictedDSPTime) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::VROSC::Signal, 0x30>, "Size mismatch!");

} // namespace end def VROSC
NEED_NO_BOX(::VROSC::Signal);
DEFINE_IL2CPP_ARG_TYPE(::VROSC::Signal*, "VROSC", "Signal");
