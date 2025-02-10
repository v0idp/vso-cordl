#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/DictionaryExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__DictionaryExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
template<typename TDictionary,typename TKey,typename TValue>
inline TDictionary Unity::Services::Core::Internal::DictionaryExtensions::MergeAllowOverride(TDictionary  self, ::System::Collections::Generic::IDictionary_2<TKey,TValue>*  dictionary)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DictionaryExtensions*>::get(),
                    "MergeAllowOverride",
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDictionary>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<TDictionary, false>(nullptr, ___internal_method, self, dictionary);
}
template<typename TKey,typename TValue>
inline bool Unity::Services::Core::Internal::DictionaryExtensions::ValueEquals(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  x, ::System::Collections::Generic::IDictionary_2<TKey,TValue>*  y)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DictionaryExtensions*>::get(),
                    "ValueEquals",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, x, y);
}
template<typename TKey,typename TValue,typename TComparer>
inline bool Unity::Services::Core::Internal::DictionaryExtensions::ValueEquals(::System::Collections::Generic::IDictionary_2<TKey,TValue>*  x, ::System::Collections::Generic::IDictionary_2<TKey,TValue>*  y, TComparer  valueComparer)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DictionaryExtensions*>::get(),
                    "ValueEquals",
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TComparer>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TComparer>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, x, y, valueComparer);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::DictionaryExtensions::DictionaryExtensions()   {
}
