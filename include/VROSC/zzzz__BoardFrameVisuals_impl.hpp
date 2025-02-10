#pragma once
// IWYU pragma private; include "VROSC/BoardFrameVisuals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__BoardFrameVisuals_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VROSC/zzzz__BoardFrameNote_def.hpp"
#include "VROSC/zzzz__NoteFieldMonitor_def.hpp"
//  Writing Method size for method: ::VROSC::BoardFrameVisuals.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardFrameVisuals::*)()>(&::VROSC::BoardFrameVisuals::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x17acec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardFrameVisuals*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BoardFrameVisuals.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardFrameVisuals::*)()>(&::VROSC::BoardFrameVisuals::Update)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x17acf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardFrameVisuals*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BoardFrameVisuals.Assign
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardFrameVisuals::*)()>(&::VROSC::BoardFrameVisuals::Assign)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x17ad304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardFrameVisuals*>::get(),
                        "Assign",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::BoardFrameVisuals._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::BoardFrameVisuals::*)()>(&::VROSC::BoardFrameVisuals::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x17ad354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardFrameVisuals*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::NoteFieldMonitor>& VROSC::BoardFrameVisuals::__cordl_internal_get__monitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitor;
}
constexpr ::UnityW<::VROSC::NoteFieldMonitor> const& VROSC::BoardFrameVisuals::__cordl_internal_get__monitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitor;
}
constexpr void VROSC::BoardFrameVisuals::__cordl_internal_set__monitor(::UnityW<::VROSC::NoteFieldMonitor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____monitor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::BoardFrameNote>,::Array<::UnityW<::VROSC::BoardFrameNote>>*>& VROSC::BoardFrameVisuals::__cordl_internal_get__notes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notes;
}
constexpr ::ArrayW<::UnityW<::VROSC::BoardFrameNote>,::Array<::UnityW<::VROSC::BoardFrameNote>>*> const& VROSC::BoardFrameVisuals::__cordl_internal_get__notes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notes;
}
constexpr void VROSC::BoardFrameVisuals::__cordl_internal_set__notes(::ArrayW<::UnityW<::VROSC::BoardFrameNote>,::Array<::UnityW<::VROSC::BoardFrameNote>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____notes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& VROSC::BoardFrameVisuals::__cordl_internal_get__colors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& VROSC::BoardFrameVisuals::__cordl_internal_get__colors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colors;
}
constexpr void VROSC::BoardFrameVisuals::__cordl_internal_set__colors(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& VROSC::BoardFrameVisuals::__cordl_internal_get__playing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& VROSC::BoardFrameVisuals::__cordl_internal_get__playing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playing;
}
constexpr void VROSC::BoardFrameVisuals::__cordl_internal_set__playing(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playing)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::BoardFrameVisuals::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardFrameVisuals*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BoardFrameVisuals::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardFrameVisuals*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BoardFrameVisuals::Assign()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardFrameVisuals*>::get(),
                        "Assign",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::BoardFrameVisuals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::BoardFrameVisuals*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::BoardFrameVisuals* VROSC::BoardFrameVisuals::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::BoardFrameVisuals*>());
}
// Ctor Parameters []
constexpr ::VROSC::BoardFrameVisuals::BoardFrameVisuals()   {
}
