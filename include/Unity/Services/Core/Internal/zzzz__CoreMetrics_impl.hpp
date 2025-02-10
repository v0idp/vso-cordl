#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/CoreMetrics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreMetrics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IMetrics_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreMetrics.set_Instance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::Services::Core::Internal::CoreMetrics*)>(&::Unity::Services::Core::Internal::CoreMetrics::set_Instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2ea2268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreMetrics*>::get(),
                        "set_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreMetrics*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreMetrics._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreMetrics::*)()>(&::Unity::Services::Core::Internal::CoreMetrics::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ea22b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreMetrics*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::Unity::Services::Core::Telemetry::Internal::IMetrics*>*& Unity::Services::Core::Internal::CoreMetrics::__cordl_internal_get__AllPackageMetrics_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllPackageMetrics_k__BackingField;
}
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::Unity::Services::Core::Telemetry::Internal::IMetrics*>* const& Unity::Services::Core::Internal::CoreMetrics::__cordl_internal_get__AllPackageMetrics_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllPackageMetrics_k__BackingField;
}
constexpr void Unity::Services::Core::Internal::CoreMetrics::__cordl_internal_set__AllPackageMetrics_k__BackingField(::System::Collections::Generic::IDictionary_2<::System::Type*,::Unity::Services::Core::Telemetry::Internal::IMetrics*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AllPackageMetrics_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Core::Internal::CoreMetrics::setStaticF__Instance_k__BackingField(::Unity::Services::Core::Internal::CoreMetrics*  value)  {
::cordl_internals::setStaticField<::Unity::Services::Core::Internal::CoreMetrics*, "<Instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreMetrics*>::get>(std::forward<::Unity::Services::Core::Internal::CoreMetrics*>(value));
}
inline ::Unity::Services::Core::Internal::CoreMetrics* Unity::Services::Core::Internal::CoreMetrics::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::Unity::Services::Core::Internal::CoreMetrics*, "<Instance>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreMetrics*>::get>();
}
inline void Unity::Services::Core::Internal::CoreMetrics::set_Instance(::Unity::Services::Core::Internal::CoreMetrics*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreMetrics*>::get(),
                        "set_Instance",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreMetrics*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Unity::Services::Core::Internal::CoreMetrics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreMetrics*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::CoreMetrics* Unity::Services::Core::Internal::CoreMetrics::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::CoreMetrics*>());
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::CoreMetrics::CoreMetrics()   {
}
