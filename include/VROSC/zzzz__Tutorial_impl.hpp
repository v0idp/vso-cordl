#pragma once
// IWYU pragma private; include "VROSC/Tutorial.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__Tutorial_def.hpp"
#include "VROSC/zzzz__TutorialStep_def.hpp"
//  Writing Method size for method: ::VROSC::Tutorial.get_Id
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VROSC::Tutorial::*)()>(&::VROSC::Tutorial::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x170414c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Tutorial*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Tutorial.get_Steps
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*> (::VROSC::Tutorial::*)()>(&::VROSC::Tutorial::get_Steps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1704154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Tutorial*>::get(),
                        "get_Steps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Tutorial.GetStepIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::Tutorial::*)(::VROSC::TutorialStep*)>(&::VROSC::Tutorial::GetStepIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x170415c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Tutorial*>::get(),
                        "GetStepIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialStep*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::Tutorial._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::Tutorial::*)()>(&::VROSC::Tutorial::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17041b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Tutorial*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& VROSC::Tutorial::__cordl_internal_get__id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr ::StringW const& VROSC::Tutorial::__cordl_internal_get__id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id;
}
constexpr void VROSC::Tutorial::__cordl_internal_set__id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*>& VROSC::Tutorial::__cordl_internal_get__steps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steps;
}
constexpr ::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*> const& VROSC::Tutorial::__cordl_internal_get__steps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steps;
}
constexpr void VROSC::Tutorial::__cordl_internal_set__steps(::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____steps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW VROSC::Tutorial::get_Id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Tutorial*>::get(),
                        "get_Id",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*> VROSC::Tutorial::get_Steps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Tutorial*>::get(),
                        "get_Steps",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::VROSC::TutorialStep>,::Array<::UnityW<::VROSC::TutorialStep>>*>, false>(this, ___internal_method);
}
inline int32_t VROSC::Tutorial::GetStepIndex(::VROSC::TutorialStep*  step)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Tutorial*>::get(),
                        "GetStepIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VROSC::TutorialStep*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, step);
}
inline void VROSC::Tutorial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::Tutorial*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::Tutorial* VROSC::Tutorial::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::Tutorial*>());
}
// Ctor Parameters []
constexpr ::VROSC::Tutorial::Tutorial()   {
}
