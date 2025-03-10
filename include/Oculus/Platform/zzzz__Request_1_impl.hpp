#pragma once
// IWYU pragma private; include "Oculus/Platform/Request_1.hpp"
#include "Oculus/Platform/zzzz__Request_impl.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
template<typename T>
constexpr ::Oculus::Platform::Message_1_Callback<T>*& Oculus::Platform::Request_1<T>::__cordl_internal_get_callback_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback_;
}
template<typename T>
constexpr ::Oculus::Platform::Message_1_Callback<T>* const& Oculus::Platform::Request_1<T>::__cordl_internal_get_callback_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback_;
}
template<typename T>
constexpr void Oculus::Platform::Request_1<T>::__cordl_internal_set_callback_(::Oculus::Platform::Message_1_Callback<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
::cordl_internals::setInstanceField(this, &this->___callback_, value);
}
template<typename T>
inline void Oculus::Platform::Request_1<T>::_ctor(uint64_t  requestID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<T>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestID);
}
template<typename T>
inline ::Oculus::Platform::Request_1<T>* Oculus::Platform::Request_1<T>::OnComplete(::Oculus::Platform::Message_1_Callback<T>*  callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<T>*>::get(),
                        "OnComplete",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1_Callback<T>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<T>*, false>(this, ___internal_method, callback);
}
template<typename T>
inline void Oculus::Platform::Request_1<T>::HandleMessage(::Oculus::Platform::Message*  msg)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Request_1<T>*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
template<typename T>
inline ::Oculus::Platform::Request_1<T>* Oculus::Platform::Request_1<T>::New_ctor(uint64_t  requestID)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Request_1<T>*>(requestID));
}
// Ctor Parameters []
template<typename T>
constexpr ::Oculus::Platform::Request_1<T>::Request_1()   {
}
