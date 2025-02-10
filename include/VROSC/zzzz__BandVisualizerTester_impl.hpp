#pragma once
// IWYU pragma private; include "VROSC/BandVisualizerTester.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__BandVisualizerTester_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::VROSC::BandVisualizerTester.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BandVisualizerTester::*)()>(&::VROSC::BandVisualizerTester::Awake)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x1712144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BandVisualizerTester*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BandVisualizerTester.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BandVisualizerTester::*)()>(&::VROSC::BandVisualizerTester::Update)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x17122fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BandVisualizerTester*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BandVisualizerTester._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BandVisualizerTester::*)()>(&::VROSC::BandVisualizerTester::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1712428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BandVisualizerTester*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& VROSC::BandVisualizerTester::__cordl_internal_get__numberOfBands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfBands;
}
constexpr int32_t const& VROSC::BandVisualizerTester::__cordl_internal_get__numberOfBands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numberOfBands;
}
constexpr void VROSC::BandVisualizerTester::__cordl_internal_set__numberOfBands(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numberOfBands = value;
}
constexpr bool& VROSC::BandVisualizerTester::__cordl_internal_get__currentPlayingOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPlayingOnly;
}
constexpr bool const& VROSC::BandVisualizerTester::__cordl_internal_get__currentPlayingOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPlayingOnly;
}
constexpr void VROSC::BandVisualizerTester::__cordl_internal_set__currentPlayingOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPlayingOnly = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>& VROSC::BandVisualizerTester::__cordl_internal_get__bandTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bandTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> const& VROSC::BandVisualizerTester::__cordl_internal_get__bandTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bandTransforms;
}
constexpr void VROSC::BandVisualizerTester::__cordl_internal_set__bandTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bandTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::BandVisualizerTester::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BandVisualizerTester*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BandVisualizerTester::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BandVisualizerTester*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BandVisualizerTester::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BandVisualizerTester*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::BandVisualizerTester* VROSC::BandVisualizerTester::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BandVisualizerTester*>());
}
// Ctor Parameters []
constexpr ::VROSC::BandVisualizerTester::BandVisualizerTester()   {
}
