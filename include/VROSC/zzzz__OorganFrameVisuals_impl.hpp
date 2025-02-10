#pragma once
// IWYU pragma private; include "VROSC/OorganFrameVisuals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__OorganFrameVisuals_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "VROSC/zzzz__ClustrFrameString_def.hpp"
#include "VROSC/zzzz__MinMaxFloat_def.hpp"
#include "VROSC/zzzz__NoteFieldMonitor_def.hpp"
//  Writing Method size for method: ::VROSC::OorganFrameVisuals.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OorganFrameVisuals::*)()>(&::VROSC::OorganFrameVisuals::Start)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x17ae8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OorganFrameVisuals*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OorganFrameVisuals.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OorganFrameVisuals::*)()>(&::VROSC::OorganFrameVisuals::Update)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x17aea70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OorganFrameVisuals*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OorganFrameVisuals.GetAngleByNote
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::VROSC::OorganFrameVisuals::*)(int32_t)>(&::VROSC::OorganFrameVisuals::GetAngleByNote)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x17aee20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OorganFrameVisuals*>::get(),
                        "GetAngleByNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OorganFrameVisuals.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OorganFrameVisuals::*)()>(&::VROSC::OorganFrameVisuals::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x17aee7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OorganFrameVisuals*>::get(),
                        "OnDrawGizmosSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::OorganFrameVisuals._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::OorganFrameVisuals::*)()>(&::VROSC::OorganFrameVisuals::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17af16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OorganFrameVisuals*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::VROSC::MinMaxFloat*& VROSC::OorganFrameVisuals::__cordl_internal_get__height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr ::VROSC::MinMaxFloat* const& VROSC::OorganFrameVisuals::__cordl_internal_get__height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr void VROSC::OorganFrameVisuals::__cordl_internal_set__height(::VROSC::MinMaxFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____height)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VROSC::MinMaxFloat*& VROSC::OorganFrameVisuals::__cordl_internal_get__width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr ::VROSC::MinMaxFloat* const& VROSC::OorganFrameVisuals::__cordl_internal_get__width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____width;
}
constexpr void VROSC::OorganFrameVisuals::__cordl_internal_set__width(::VROSC::MinMaxFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____width)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::ClustrFrameString>& VROSC::OorganFrameVisuals::__cordl_internal_get__clustrStringPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clustrStringPrefab;
}
constexpr ::UnityW<::VROSC::ClustrFrameString> const& VROSC::OorganFrameVisuals::__cordl_internal_get__clustrStringPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clustrStringPrefab;
}
constexpr void VROSC::OorganFrameVisuals::__cordl_internal_set__clustrStringPrefab(::UnityW<::VROSC::ClustrFrameString>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clustrStringPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::VROSC::NoteFieldMonitor>& VROSC::OorganFrameVisuals::__cordl_internal_get__monitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitor;
}
constexpr ::UnityW<::VROSC::NoteFieldMonitor> const& VROSC::OorganFrameVisuals::__cordl_internal_get__monitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____monitor;
}
constexpr void VROSC::OorganFrameVisuals::__cordl_internal_set__monitor(::UnityW<::VROSC::NoteFieldMonitor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____monitor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::VROSC::ClustrFrameString>,::Array<::UnityW<::VROSC::ClustrFrameString>>*>& VROSC::OorganFrameVisuals::__cordl_internal_get__strings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strings;
}
constexpr ::ArrayW<::UnityW<::VROSC::ClustrFrameString>,::Array<::UnityW<::VROSC::ClustrFrameString>>*> const& VROSC::OorganFrameVisuals::__cordl_internal_get__strings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____strings;
}
constexpr void VROSC::OorganFrameVisuals::__cordl_internal_set__strings(::ArrayW<::UnityW<::VROSC::ClustrFrameString>,::Array<::UnityW<::VROSC::ClustrFrameString>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____strings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::OorganFrameVisuals::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OorganFrameVisuals*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OorganFrameVisuals::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OorganFrameVisuals*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 VROSC::OorganFrameVisuals::GetAngleByNote(int32_t  note)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OorganFrameVisuals*>::get(),
                        "GetAngleByNote",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, note);
}
inline void VROSC::OorganFrameVisuals::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OorganFrameVisuals*>::get(),
                        "OnDrawGizmosSelected",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::OorganFrameVisuals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::OorganFrameVisuals*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::OorganFrameVisuals* VROSC::OorganFrameVisuals::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::OorganFrameVisuals*>());
}
// Ctor Parameters []
constexpr ::VROSC::OorganFrameVisuals::OorganFrameVisuals()   {
}
