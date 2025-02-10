#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/CoreDiagnostics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreDiagnostics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsComponentProvider_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.get_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::CoreDiagnostics* (*)()>(&::Unity::Services::Core::Internal::CoreDiagnostics::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2ea2150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.set_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Services::Core::Internal::CoreDiagnostics*)>(&::Unity::Services::Core::Internal::CoreDiagnostics::set_Instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ea2198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                        "set_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreDiagnostics*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics.set_DiagnosticsComponentProvider
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreDiagnostics::*)(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*)>(&::Unity::Services::Core::Internal::CoreDiagnostics::set_DiagnosticsComponentProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ea21e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                        "set_DiagnosticsComponentProvider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreDiagnostics._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreDiagnostics::*)()>(&::Unity::Services::Core::Internal::CoreDiagnostics::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ea21ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_get__CoreTags_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CoreTags_k__BackingField;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_get__CoreTags_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CoreTags_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_set__CoreTags_k__BackingField(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CoreTags_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*& Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_get__DiagnosticsComponentProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DiagnosticsComponentProvider_k__BackingField;
}
constexpr ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider* const& Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_get__DiagnosticsComponentProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DiagnosticsComponentProvider_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::CoreDiagnostics::__cordl_internal_set__DiagnosticsComponentProvider_k__BackingField(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DiagnosticsComponentProvider_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::setStaticF__Instance_k__BackingField(::Unity::Services::Core::Internal::CoreDiagnostics*  value)  {
::cordl_internals::setStaticField<::Unity::Services::Core::Internal::CoreDiagnostics*, "<Instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get>(std::forward<::Unity::Services::Core::Internal::CoreDiagnostics*>(value));
}
inline ::Unity::Services::Core::Internal::CoreDiagnostics* Unity::Services::Core::Internal::CoreDiagnostics::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::Unity::Services::Core::Internal::CoreDiagnostics*, "<Instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get>();
}
inline ::Unity::Services::Core::Internal::CoreDiagnostics* Unity::Services::Core::Internal::CoreDiagnostics::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                        "get_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::CoreDiagnostics*, false>(nullptr, ___internal_method);
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::set_Instance(::Unity::Services::Core::Internal::CoreDiagnostics*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                        "set_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreDiagnostics*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::set_DiagnosticsComponentProvider(::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                        "set_DiagnosticsComponentProvider",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Core::Internal::CoreDiagnostics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreDiagnostics*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::CoreDiagnostics* Unity::Services::Core::Internal::CoreDiagnostics::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::CoreDiagnostics*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::CoreDiagnostics::CoreDiagnostics()   {
}
