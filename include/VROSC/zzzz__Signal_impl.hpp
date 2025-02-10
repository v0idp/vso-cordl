#pragma once
// IWYU pragma private; include "VROSC/Signal.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__Signal_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "VROSC/zzzz__SignalControllerInfo_def.hpp"
//  Writing Method size for method: ::VROSC::Signal._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Signal::*)(float_t, ::VROSC::SignalControllerInfo*, ::System::Nullable_1<bool>, double_t)>(&::VROSC::Signal::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1721330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Signal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SignalControllerInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& VROSC::Signal::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr float_t const& VROSC::Signal::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void VROSC::Signal::__cordl_internal_set_Value(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
constexpr ::VROSC::SignalControllerInfo*& VROSC::Signal::__cordl_internal_get_ControllerInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ControllerInfo;
}
constexpr ::VROSC::SignalControllerInfo* const& VROSC::Signal::__cordl_internal_get_ControllerInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ControllerInfo;
}
constexpr void VROSC::Signal::__cordl_internal_set_ControllerInfo(::VROSC::SignalControllerInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ControllerInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<bool>& VROSC::Signal::__cordl_internal_get_FirstFrameOfSignal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstFrameOfSignal;
}
constexpr ::System::Nullable_1<bool> const& VROSC::Signal::__cordl_internal_get_FirstFrameOfSignal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstFrameOfSignal;
}
constexpr void VROSC::Signal::__cordl_internal_set_FirstFrameOfSignal(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FirstFrameOfSignal = value;
}
constexpr double_t& VROSC::Signal::__cordl_internal_get_PredictedDSPTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PredictedDSPTime;
}
constexpr double_t const& VROSC::Signal::__cordl_internal_get_PredictedDSPTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PredictedDSPTime;
}
constexpr void VROSC::Signal::__cordl_internal_set_PredictedDSPTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PredictedDSPTime = value;
}
inline void VROSC::Signal::_ctor(float_t  value, ::VROSC::SignalControllerInfo*  controllerInfo, ::System::Nullable_1<bool>  firstFrameOfSignal, double_t  predictedDspTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Signal*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::SignalControllerInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, controllerInfo, firstFrameOfSignal, predictedDspTime);
}
inline ::VROSC::Signal* VROSC::Signal::New_ctor(float_t  value, ::VROSC::SignalControllerInfo*  controllerInfo, ::System::Nullable_1<bool>  firstFrameOfSignal, double_t  predictedDspTime)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Signal*>(value, controllerInfo, firstFrameOfSignal, predictedDspTime));
}
// Ctor Parameters []
constexpr ::VROSC::Signal::Signal()   {
}
