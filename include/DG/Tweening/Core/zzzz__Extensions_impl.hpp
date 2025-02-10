#pragma once
// IWYU pragma private; include "DG/Tweening/Core/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DG/Tweening/Core/zzzz__Extensions_def.hpp"
#include "DG/Tweening/Core/Enums/zzzz__SpecialStartupMode_def.hpp"
#include "DG/Tweening/Core/zzzz__TweenerCore_3_def.hpp"
template<typename T>
inline T DG::Tweening::Core::Extensions::SetSpecialStartupMode(T  t, ::DG::Tweening::Core::Enums::SpecialStartupMode  mode)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Extensions*>::get(),
                    "SetSpecialStartupMode",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::Enums::SpecialStartupMode>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, t, mode);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* DG::Tweening::Core::Extensions::Blendable(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Extensions*>::get(),
                    "Blendable",
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugOptions>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugOptions>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*, false>(nullptr, ___internal_method, t);
}
template<typename T1,typename T2,typename TPlugOptions>
inline ::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>* DG::Tweening::Core::Extensions::NoFrom(::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*  t)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Core::Extensions*>::get(),
                    "NoFrom",
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugOptions>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPlugOptions>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::TweenerCore_3<T1,T2,TPlugOptions>*, false>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::DG::Tweening::Core::Extensions::Extensions()   {
}
