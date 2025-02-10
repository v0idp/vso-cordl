#pragma once
// IWYU pragma private; include "VROSC/StaticData.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__StaticData_def.hpp"
#include "VROSC/zzzz__SampleDatabase_def.hpp"
//  Writing Method size for method: ::VROSC::StaticData.get_DrumSamples
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::VROSC::SampleDatabase> (::VROSC::StaticData::*)()>(&::VROSC::StaticData::get_DrumSamples)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fb1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StaticData*>::get(),
                        "get_DrumSamples",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::StaticData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::StaticData::*)()>(&::VROSC::StaticData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fb204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StaticData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::SampleDatabase>& VROSC::StaticData::__cordl_internal_get__drumsSamplesDatabase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumsSamplesDatabase;
}
constexpr ::UnityW<::VROSC::SampleDatabase> const& VROSC::StaticData::__cordl_internal_get__drumsSamplesDatabase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drumsSamplesDatabase;
}
constexpr void VROSC::StaticData::__cordl_internal_set__drumsSamplesDatabase(::UnityW<::VROSC::SampleDatabase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____drumsSamplesDatabase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::VROSC::SampleDatabase> VROSC::StaticData::get_DrumSamples()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StaticData*>::get(),
                        "get_DrumSamples",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::VROSC::SampleDatabase>, false>(this, ___internal_method);
}
inline void VROSC::StaticData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::StaticData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::StaticData* VROSC::StaticData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::StaticData*>());
}
// Ctor Parameters []
constexpr ::VROSC::StaticData::StaticData()   {
}
