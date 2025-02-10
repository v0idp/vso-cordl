#pragma once
// IWYU pragma private; include "RSG/Tuple.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "RSG/zzzz__Tuple_def.hpp"
#include "RSG/zzzz__Tuple_2_def.hpp"
#include "RSG/zzzz__Tuple_3_def.hpp"
#include "RSG/zzzz__Tuple_4_def.hpp"
//  Writing Method size for method: ::RSG::Tuple._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RSG::Tuple::*)()>(&::RSG::Tuple::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17f7510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Tuple*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
template<typename T1,typename T2>
inline ::RSG::Tuple_2<T1,T2>* RSG::Tuple::Create(T1  item1, T2  item2)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Tuple*>::get(),
                    "Create",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::RSG::Tuple_2<T1,T2>*, false>(nullptr, ___internal_method, item1, item2);
}
template<typename T1,typename T2,typename T3>
inline ::RSG::Tuple_3<T1,T2,T3>* RSG::Tuple::Create(T1  item1, T2  item2, T3  item3)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Tuple*>::get(),
                    "Create",
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::RSG::Tuple_3<T1,T2,T3>*, false>(nullptr, ___internal_method, item1, item2, item3);
}
template<typename T1,typename T2,typename T3,typename T4>
inline ::RSG::Tuple_4<T1,T2,T3,T4>* RSG::Tuple::Create(T1  item1, T2  item2, T3  item3, T4  item4)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Tuple*>::get(),
                    "Create",
                    std::array<const Il2CppClass*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get()},
                    ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T4>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T4>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::RSG::Tuple_4<T1,T2,T3,T4>*, false>(nullptr, ___internal_method, item1, item2, item3, item4);
}
inline void RSG::Tuple::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RSG::Tuple*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RSG::Tuple* RSG::Tuple::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RSG::Tuple*>());
}
// Ctor Parameters []
constexpr ::RSG::Tuple::Tuple()   {
}
