#pragma once
// IWYU pragma private; include "BeautifyEffect/Demo1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "BeautifyEffect/zzzz__Demo1_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
//  Writing Method size for method: ::BeautifyEffect::Demo1.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::Demo1::*)()>(&::BeautifyEffect::Demo1::Update)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x180e194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo1*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::Demo1.UpdateText
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::Demo1::*)()>(&::BeautifyEffect::Demo1::UpdateText)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x180e428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo1*>::get(),
                        "UpdateText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::Demo1.OnGUI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::Demo1::*)()>(&::BeautifyEffect::Demo1::OnGUI)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x180e518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo1*>::get(),
                        "OnGUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeautifyEffect::Demo1._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeautifyEffect::Demo1::*)()>(&::BeautifyEffect::Demo1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x180e70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr float_t& BeautifyEffect::Demo1::__cordl_internal_get_deltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr float_t const& BeautifyEffect::Demo1::__cordl_internal_get_deltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr void BeautifyEffect::Demo1::__cordl_internal_set_deltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaTime = value;
}
constexpr bool& BeautifyEffect::Demo1::__cordl_internal_get_benchmarkEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___benchmarkEnabled;
}
constexpr bool const& BeautifyEffect::Demo1::__cordl_internal_get_benchmarkEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___benchmarkEnabled;
}
constexpr void BeautifyEffect::Demo1::__cordl_internal_set_benchmarkEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___benchmarkEnabled = value;
}
constexpr ::UnityEngine::GUIStyle*& BeautifyEffect::Demo1::__cordl_internal_get_style()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___style;
}
constexpr ::UnityEngine::GUIStyle* const& BeautifyEffect::Demo1::__cordl_internal_get_style() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___style;
}
constexpr void BeautifyEffect::Demo1::__cordl_internal_set_style(::UnityEngine::GUIStyle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___style)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rect& BeautifyEffect::Demo1::__cordl_internal_get_rect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rect;
}
constexpr ::UnityEngine::Rect const& BeautifyEffect::Demo1::__cordl_internal_get_rect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rect;
}
constexpr void BeautifyEffect::Demo1::__cordl_internal_set_rect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rect = value;
}
inline void BeautifyEffect::Demo1::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo1*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeautifyEffect::Demo1::UpdateText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo1*>::get(),
                        "UpdateText",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeautifyEffect::Demo1::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo1*>::get(),
                        "OnGUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeautifyEffect::Demo1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeautifyEffect::Demo1*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BeautifyEffect::Demo1* BeautifyEffect::Demo1::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeautifyEffect::Demo1*>());
}
// Ctor Parameters []
constexpr ::BeautifyEffect::Demo1::Demo1()   {
}
