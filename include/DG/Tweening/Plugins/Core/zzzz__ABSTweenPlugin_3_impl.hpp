#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/ABSTweenPlugin_3.hpp"
#include "DG/Tweening/Plugins/Core/zzzz__ITweenPlugin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DG/Tweening/Plugins/Core/zzzz__ABSTweenPlugin_3_def.hpp"
#include "DG/Tweening/Core/Enums/zzzz__UpdateNotice_def.hpp"
#include "DG/Tweening/Core/zzzz__DOGetter_1_def.hpp"
#include "DG/Tweening/Core/zzzz__DOSetter_1_def.hpp"
#include "DG/Tweening/Core/zzzz__TweenerCore_3_def.hpp"
#include "DG/Tweening/zzzz__Tween_def.hpp"
template<typename T1,typename T2,typename TPlugOptions>
inline void DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::Reset(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
template<typename T1,typename T2,typename TPlugOptions>
inline void DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::SetFrom(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, bool  isRelative)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, isRelative);
}
template<typename T1,typename T2,typename TPlugOptions>
inline void DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::SetFrom(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, T2  fromValue, bool  setImmediately)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, fromValue, setImmediately);
}
template<typename T1,typename T2,typename TPlugOptions>
inline T2 DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::ConvertToStartValue(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t, T1  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<T2, false>(this, ___internal_method, t, value);
}
template<typename T1,typename T2,typename TPlugOptions>
inline void DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::SetRelativeEndValue(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
template<typename T1,typename T2,typename TPlugOptions>
inline void DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::SetChangeValue(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
template<typename T1,typename T2,typename TPlugOptions>
inline float_t DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::GetSpeedBasedDuration(TPlugOptions  options, float_t  unitsXSecond, T2  changeValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, options, unitsXSecond, changeValue);
}
template<typename T1,typename T2,typename TPlugOptions>
inline void DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::EvaluateAndApply(TPlugOptions  options, ::DG::Tweening::Tween*  t, bool  isRelative, ::DG::Tweening::Core::DOGetter_1<T1>*  getter, ::DG::Tweening::Core::DOSetter_1<T1>*  setter, float_t  elapsed, T2  startValue, T2  changeValue, float_t  duration, bool  usingInversePosition, ::DG::Tweening::Core::Enums::UpdateNotice  updateNotice)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, options, t, isRelative, getter, setter, elapsed, startValue, changeValue, duration, usingInversePosition, updateNotice);
}
template<typename T1,typename T2,typename TPlugOptions>
inline void DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>* DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>*>());
}
/// @brief Convert operator to "::DG::Tweening::Plugins::Core::ITweenPlugin"
template<typename T1,typename T2,typename TPlugOptions>
constexpr  DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::operator ::DG::Tweening::Plugins::Core::ITweenPlugin*() noexcept {
return static_cast<::DG::Tweening::Plugins::Core::ITweenPlugin*>(static_cast<void*>(this));
}
/// @brief Convert to "::DG::Tweening::Plugins::Core::ITweenPlugin"
template<typename T1,typename T2,typename TPlugOptions>
constexpr ::DG::Tweening::Plugins::Core::ITweenPlugin* DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::i___DG__Tweening__Plugins__Core__ITweenPlugin() noexcept {
return static_cast<::DG::Tweening::Plugins::Core::ITweenPlugin*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T1,typename T2,typename TPlugOptions>
constexpr ::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T1,T2,TPlugOptions>::ABSTweenPlugin_3()   {
}
