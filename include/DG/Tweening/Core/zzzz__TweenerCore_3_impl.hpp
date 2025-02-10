#pragma once
// IWYU pragma private; include "DG/Tweening/Core/TweenerCore_3.hpp"
#include "DG/Tweening/zzzz__Tweener_impl.hpp"
#include "DG/Tweening/Core/zzzz__TweenerCore_3_def.hpp"
#include "DG/Tweening/Core/Enums/zzzz__UpdateMode_def.hpp"
#include "DG/Tweening/Core/Enums/zzzz__UpdateNotice_def.hpp"
#include "DG/Tweening/Core/zzzz__DOGetter_1_def.hpp"
#include "DG/Tweening/Core/zzzz__DOSetter_1_def.hpp"
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/zzzz__Tweener_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T1,typename T2,typename TPlugOptions>
constexpr T2& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_startValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startValue;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr T2 const& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_startValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startValue;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr void DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_set_startValue(T2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___startValue, value);
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr T2& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_endValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endValue;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr T2 const& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_endValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endValue;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr void DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_set_endValue(T2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___endValue, value);
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr T2& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_changeValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeValue;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr T2 const& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_changeValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeValue;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr void DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_set_changeValue(T2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___changeValue, value);
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr TPlugOptions& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_plugOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plugOptions;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr TPlugOptions const& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_plugOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plugOptions;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr void DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_set_plugOptions(TPlugOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___plugOptions, value);
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr ::DG::Tweening::Core::DOGetter_1<T1>*& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_getter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getter;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr ::DG::Tweening::Core::DOGetter_1<T1>* const& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_getter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getter;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr void DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_set_getter(::DG::Tweening::Core::DOGetter_1<T1>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___getter, value);
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr ::DG::Tweening::Core::DOSetter_1<T1>*& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_setter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setter;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr ::DG::Tweening::Core::DOSetter_1<T1>* const& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_setter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___setter;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr void DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_set_setter(::DG::Tweening::Core::DOSetter_1<T1>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___setter, value);
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_tweenPlugin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tweenPlugin;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>* const& DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_get_tweenPlugin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tweenPlugin;
}
template<typename T1,typename T2,typename TPlugOptions>
constexpr void DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::__cordl_internal_set_tweenPlugin(::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___tweenPlugin, value);
}
template<typename T1,typename T2,typename TPlugOptions>
inline void DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Tweener* DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::ChangeStartValue(::System::Object*  newStartValue, float_t  newDuration)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Tweener*, false>(this, ___internal_method, newStartValue, newDuration);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Tweener* DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::ChangeEndValue(::System::Object*  newEndValue, bool  snapStartValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Tweener*, false>(this, ___internal_method, newEndValue, snapStartValue);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Tweener* DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::ChangeEndValue(::System::Object*  newEndValue, float_t  newDuration, bool  snapStartValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Tweener*, false>(this, ___internal_method, newEndValue, newDuration, snapStartValue);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Tweener* DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::ChangeValues(::System::Object*  newStartValue, ::System::Object*  newEndValue, float_t  newDuration)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Tweener*, false>(this, ___internal_method, newStartValue, newEndValue, newDuration);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::ChangeStartValue(T2  newStartValue, float_t  newDuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                        "ChangeStartValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*, false>(this, ___internal_method, newStartValue, newDuration);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::ChangeEndValue(T2  newEndValue, bool  snapStartValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                        "ChangeEndValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*, false>(this, ___internal_method, newEndValue, snapStartValue);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::ChangeEndValue(T2  newEndValue, float_t  newDuration, bool  snapStartValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                        "ChangeEndValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*, false>(this, ___internal_method, newEndValue, newDuration, snapStartValue);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::ChangeValues(T2  newStartValue, T2  newEndValue, float_t  newDuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                        "ChangeValues",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*, false>(this, ___internal_method, newStartValue, newEndValue, newDuration);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Tweener* DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::SetFrom(bool  relative)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Tweener*, false>(this, ___internal_method, relative);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Tweener* DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::SetFrom(T2  fromValue, bool  setImmediately)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                        "SetFrom",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Tweener*, false>(this, ___internal_method, fromValue, setImmediately);
}
template<typename T1,typename T2,typename TPlugOptions>
inline void DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T1,typename T2,typename TPlugOptions>
inline bool DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::Validate()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename T1,typename T2,typename TPlugOptions>
inline float_t DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::UpdateDelay(float_t  elapsed)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, elapsed);
}
template<typename T1,typename T2,typename TPlugOptions>
inline bool DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::Startup()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template<typename T1,typename T2,typename TPlugOptions>
inline bool DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::ApplyTween(float_t  prevPosition, int32_t  prevCompletedLoops, int32_t  newCompletedSteps, bool  useInversePosition, ::DG::Tweening::Core::Enums::UpdateMode  updateMode, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prevPosition, prevCompletedLoops, newCompletedSteps, useInversePosition, updateMode, updateNotice);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>());
}
// Ctor Parameters []
template<typename T1,typename T2,typename TPlugOptions>
constexpr ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>::TweenerCore_3()   {
}
