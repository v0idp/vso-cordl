#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedSizedQueue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FixedSizedQueue_1_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentQueue_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<T>*& GlobalNamespace::FixedSizedQueue_1<T>::__cordl_internal_get_q()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___q;
}
template<typename T>
constexpr ::System::Collections::Concurrent::ConcurrentQueue_1<T>* const& GlobalNamespace::FixedSizedQueue_1<T>::__cordl_internal_get_q() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___q;
}
template<typename T>
constexpr void GlobalNamespace::FixedSizedQueue_1<T>::__cordl_internal_set_q(::System::Collections::Concurrent::ConcurrentQueue_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___q, value);
}
template<typename T>
constexpr ::System::Object*& GlobalNamespace::FixedSizedQueue_1<T>::__cordl_internal_get_lockObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockObject;
}
template<typename T>
constexpr ::System::Object* const& GlobalNamespace::FixedSizedQueue_1<T>::__cordl_internal_get_lockObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockObject;
}
template<typename T>
constexpr void GlobalNamespace::FixedSizedQueue_1<T>::__cordl_internal_set_lockObject(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___lockObject, value);
}
template<typename T>
constexpr int32_t& GlobalNamespace::FixedSizedQueue_1<T>::__cordl_internal_get__Limit_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Limit_k__BackingField;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::FixedSizedQueue_1<T>::__cordl_internal_get__Limit_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Limit_k__BackingField;
}
template<typename T>
constexpr void GlobalNamespace::FixedSizedQueue_1<T>::__cordl_internal_set__Limit_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Limit_k__BackingField = value;
}
template<typename T>
inline int32_t GlobalNamespace::FixedSizedQueue_1<T>::get_Limit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizedQueue_1<T>*>::get(),
                        "get_Limit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::FixedSizedQueue_1<T>::set_Limit(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizedQueue_1<T>*>::get(),
                        "set_Limit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T>
inline int32_t GlobalNamespace::FixedSizedQueue_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizedQueue_1<T>*>::get(),
                        "get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::FixedSizedQueue_1<T>::Get(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizedQueue_1<T>*>::get(),
                        "Get",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template<typename T>
inline ::ArrayW<T,::Array<T>*> GlobalNamespace::FixedSizedQueue_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizedQueue_1<T>*>::get(),
                        "ToArray",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T,::Array<T>*>, false>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::FixedSizedQueue_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizedQueue_1<T>*>::get(),
                        "Clear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::FixedSizedQueue_1<T>::Enqueue(T  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizedQueue_1<T>*>::get(),
                        "Enqueue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
template<typename T>
inline void GlobalNamespace::FixedSizedQueue_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FixedSizedQueue_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::FixedSizedQueue_1<T>* GlobalNamespace::FixedSizedQueue_1<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FixedSizedQueue_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::FixedSizedQueue_1<T>::FixedSizedQueue_1()   {
}
