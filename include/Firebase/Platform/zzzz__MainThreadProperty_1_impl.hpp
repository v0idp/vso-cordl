#pragma once
// IWYU pragma private; include "Firebase/Platform/MainThreadProperty_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Firebase/Platform/zzzz__MainThreadProperty_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template<typename T>
constexpr ::System::Func_1<T>*& Firebase::Platform::MainThreadProperty_1<T>::__cordl_internal_get_getPropertyDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getPropertyDelegate;
}
template<typename T>
constexpr ::System::Func_1<T>* const& Firebase::Platform::MainThreadProperty_1<T>::__cordl_internal_get_getPropertyDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getPropertyDelegate;
}
template<typename T>
constexpr void Firebase::Platform::MainThreadProperty_1<T>::__cordl_internal_set_getPropertyDelegate(::System::Func_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___getPropertyDelegate, value);
}
template<typename T>
constexpr int32_t& Firebase::Platform::MainThreadProperty_1<T>::__cordl_internal_get_lastGetPropertyTickCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGetPropertyTickCount;
}
template<typename T>
constexpr int32_t const& Firebase::Platform::MainThreadProperty_1<T>::__cordl_internal_get_lastGetPropertyTickCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGetPropertyTickCount;
}
template<typename T>
constexpr void Firebase::Platform::MainThreadProperty_1<T>::__cordl_internal_set_lastGetPropertyTickCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastGetPropertyTickCount = value;
}
template<typename T>
constexpr T& Firebase::Platform::MainThreadProperty_1<T>::__cordl_internal_get_cachedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedValue;
}
template<typename T>
constexpr T const& Firebase::Platform::MainThreadProperty_1<T>::__cordl_internal_get_cachedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cachedValue;
}
template<typename T>
constexpr void Firebase::Platform::MainThreadProperty_1<T>::__cordl_internal_set_cachedValue(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___cachedValue, value);
}
template<typename T>
inline void Firebase::Platform::MainThreadProperty_1<T>::_ctor(::System::Func_1<T>*  getPropertyDelegate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::MainThreadProperty_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, getPropertyDelegate);
}
template<typename T>
inline T Firebase::Platform::MainThreadProperty_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::MainThreadProperty_1<T>*>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline T Firebase::Platform::MainThreadProperty_1<T>::_get_Value_m__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Platform::MainThreadProperty_1<T>*>::get(),
                        "<get_Value>m__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template<typename T>
inline ::Firebase::Platform::MainThreadProperty_1<T>* Firebase::Platform::MainThreadProperty_1<T>::New_ctor(::System::Func_1<T>*  getPropertyDelegate)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Platform::MainThreadProperty_1<T>*>(getPropertyDelegate));
}
// Ctor Parameters []
template<typename T>
constexpr ::Firebase::Platform::MainThreadProperty_1<T>::MainThreadProperty_1()   {
}
