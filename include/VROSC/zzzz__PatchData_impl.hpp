#pragma once
// IWYU pragma private; include "VROSC/PatchData.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "VROSC/zzzz__PatchData_def.hpp"
//  Writing Method size for method: ::VROSC::PatchData.get_DisplayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::PatchData::*)()>(&::VROSC::PatchData::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f06a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchData*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchData.get_HelmChannel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::PatchData::*)()>(&::VROSC::PatchData::get_HelmChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f06a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchData*>::get(),
                        "get_HelmChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::PatchData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::PatchData::*)()>(&::VROSC::PatchData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16f06b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::PatchData::__cordl_internal_get__displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr ::StringW const& VROSC::PatchData::__cordl_internal_get__displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayName;
}
constexpr void VROSC::PatchData::__cordl_internal_set__displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& VROSC::PatchData::__cordl_internal_get__helmChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmChannel;
}
constexpr int32_t const& VROSC::PatchData::__cordl_internal_get__helmChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____helmChannel;
}
constexpr void VROSC::PatchData::__cordl_internal_set__helmChannel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____helmChannel = value;
}
inline ::StringW VROSC::PatchData::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchData*>::get(),
                        "get_DisplayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t VROSC::PatchData::get_HelmChannel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchData*>::get(),
                        "get_HelmChannel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void VROSC::PatchData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::PatchData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::PatchData* VROSC::PatchData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::PatchData*>());
}
// Ctor Parameters []
constexpr ::VROSC::PatchData::PatchData()   {
}
