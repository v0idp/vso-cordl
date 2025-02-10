#pragma once
// IWYU pragma private; include "Firebase/Storage/StorageProgress_1.hpp"
#include "System/zzzz__IProgress_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Storage/zzzz__StorageProgress_1_def.hpp"
#include "Firebase/Storage/zzzz__StorageProgress_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
constexpr T& Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr T const& Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr void Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>::__cordl_internal_set_value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___value, value);
}
template<typename T>
constexpr ::Firebase::Storage::StorageProgress_1<T>*& Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>::__cordl_internal_get_$this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$this;
}
template<typename T>
constexpr ::Firebase::Storage::StorageProgress_1<T>* const& Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>::__cordl_internal_get_$this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___$this;
}
template<typename T>
constexpr void Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>::__cordl_internal_set_$this(::Firebase::Storage::StorageProgress_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___$this, value);
}
template<typename T>
inline void Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline void Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>::__m__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>*>::get(),
                        "<>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template<typename T>
inline ::Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>* Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Firebase::Storage::StorageProgress_1__Report_c__AnonStorey0<T>::StorageProgress_1__Report_c__AnonStorey0()   {
}
template<typename T>
constexpr ::System::Action_1<T>*& Firebase::Storage::StorageProgress_1<T>::__cordl_internal_get_reportCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportCallback;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Firebase::Storage::StorageProgress_1<T>::__cordl_internal_get_reportCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportCallback;
}
template<typename T>
constexpr void Firebase::Storage::StorageProgress_1<T>::__cordl_internal_set_reportCallback(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___reportCallback, value);
}
template<typename T>
inline void Firebase::Storage::StorageProgress_1<T>::_ctor(::System::Action_1<T>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageProgress_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback);
}
template<typename T>
inline void Firebase::Storage::StorageProgress_1<T>::Report(T  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Storage::StorageProgress_1<T>*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template<typename T>
inline ::Firebase::Storage::StorageProgress_1<T>* Firebase::Storage::StorageProgress_1<T>::New_ctor(::System::Action_1<T>*  callback)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Storage::StorageProgress_1<T>*>(callback));
}
/// @brief Convert operator to "::System::IProgress_1<T>"
template<typename T>
constexpr  Firebase::Storage::StorageProgress_1<T>::operator ::System::IProgress_1<T>*() noexcept {
return static_cast<::System::IProgress_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IProgress_1<T>"
template<typename T>
constexpr ::System::IProgress_1<T>* Firebase::Storage::StorageProgress_1<T>::i___System__IProgress_1_T_() noexcept {
return static_cast<::System::IProgress_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Firebase::Storage::StorageProgress_1<T>::StorageProgress_1()   {
}
