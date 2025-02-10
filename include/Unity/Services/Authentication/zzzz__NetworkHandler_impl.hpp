#pragma once
// IWYU pragma private; include "Unity/Services/Authentication/NetworkHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Authentication/zzzz__INetworkHandler_impl.hpp"
#include "Unity/Services/Authentication/zzzz__NetworkHandler_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Authentication/zzzz__INetworkConfiguration_def.hpp"
//  Writing Method size for method: ::Unity::Services::Authentication::NetworkHandler.get_Configuration
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Authentication::INetworkConfiguration* (::Unity::Services::Authentication::NetworkHandler::*)()>(&::Unity::Services::Authentication::NetworkHandler::get_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e989d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkHandler*>::get(),
                        "get_Configuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Authentication::NetworkHandler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Authentication::NetworkHandler::*)(::Unity::Services::Authentication::INetworkConfiguration*)>(&::Unity::Services::Authentication::NetworkHandler::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e96630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::INetworkConfiguration*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Authentication::INetworkConfiguration*& Unity::Services::Authentication::NetworkHandler::__cordl_internal_get__Configuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr ::Unity::Services::Authentication::INetworkConfiguration* const& Unity::Services::Authentication::NetworkHandler::__cordl_internal_get__Configuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Configuration_k__BackingField;
}
constexpr void Unity::Services::Authentication::NetworkHandler::__cordl_internal_set__Configuration_k__BackingField(::Unity::Services::Authentication::INetworkConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Configuration_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Authentication::INetworkConfiguration* Unity::Services::Authentication::NetworkHandler::get_Configuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkHandler*>::get(),
                        "get_Configuration",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Authentication::INetworkConfiguration*, false>(this, ___internal_method);
}
inline void Unity::Services::Authentication::NetworkHandler::_ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Authentication::INetworkConfiguration*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, configuration);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::Services::Authentication::NetworkHandler::PostAsync(::StringW  url, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkHandler*>::get(),
                    "PostAsync",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, url, headers);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::Services::Authentication::NetworkHandler::PostAsync(::StringW  url, ::System::Object*  payload, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  headers)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Authentication::NetworkHandler*>::get(),
                    "PostAsync",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, url, payload, headers);
}
inline ::Unity::Services::Authentication::NetworkHandler* Unity::Services::Authentication::NetworkHandler::New_ctor(::Unity::Services::Authentication::INetworkConfiguration*  configuration)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Authentication::NetworkHandler*>(configuration));
}
/// @brief Convert operator to "::Unity::Services::Authentication::INetworkHandler"
constexpr  Unity::Services::Authentication::NetworkHandler::operator ::Unity::Services::Authentication::INetworkHandler*() noexcept {
return static_cast<::Unity::Services::Authentication::INetworkHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Authentication::INetworkHandler"
constexpr ::Unity::Services::Authentication::INetworkHandler* Unity::Services::Authentication::NetworkHandler::i___Unity__Services__Authentication__INetworkHandler() noexcept {
return static_cast<::Unity::Services::Authentication::INetworkHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Authentication::NetworkHandler::NetworkHandler()   {
}
