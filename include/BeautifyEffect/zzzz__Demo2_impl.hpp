#pragma once
// IWYU pragma private; include "BeautifyEffect/Demo2.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeautifyEffect/zzzz__Demo2_def.hpp"
//  Writing Method size for method: ::BeautifyEffect::Demo2.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::Demo2::*)()>(&::BeautifyEffect::Demo2::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x180e714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo2*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::Demo2.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::Demo2::*)()>(&::BeautifyEffect::Demo2::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180ec34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo2*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::Demo2.UpdateDemoMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::Demo2::*)()>(&::BeautifyEffect::Demo2::UpdateDemoMode)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x180e718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo2*>::get(),
                        "UpdateDemoMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::Demo2._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::Demo2::*)()>(&::BeautifyEffect::Demo2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180ee88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& BeautifyEffect::Demo2::__cordl_internal_get_demoMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___demoMode;
}
constexpr int32_t const& BeautifyEffect::Demo2::__cordl_internal_get_demoMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___demoMode;
}
constexpr void BeautifyEffect::Demo2::__cordl_internal_set_demoMode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___demoMode = value;
}
inline void BeautifyEffect::Demo2::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo2*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeautifyEffect::Demo2::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo2*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeautifyEffect::Demo2::UpdateDemoMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo2*>::get(),
                        "UpdateDemoMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeautifyEffect::Demo2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo2*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeautifyEffect::Demo2* BeautifyEffect::Demo2::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeautifyEffect::Demo2*>());
}
// Ctor Parameters []
constexpr ::BeautifyEffect::Demo2::Demo2()   {
}
