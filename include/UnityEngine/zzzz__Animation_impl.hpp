#pragma once
// IWYU pragma private; include "UnityEngine/Animation.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationState_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animation_Enumerator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Animation_Enumerator::*)(::UnityEngine::Animation*)>(&::UnityEngine::Animation_Enumerator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2f52c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation_Enumerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animation*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animation_Enumerator.get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::Animation_Enumerator::*)()>(&::UnityEngine::Animation_Enumerator::get_Current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2f52cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation_Enumerator*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animation_Enumerator.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Animation_Enumerator::*)()>(&::UnityEngine::Animation_Enumerator::MoveNext)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2f52d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation_Enumerator*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animation_Enumerator.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Animation_Enumerator::*)()>(&::UnityEngine::Animation_Enumerator::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f52d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation_Enumerator*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animation>& UnityEngine::Animation_Enumerator::__cordl_internal_get_m_Outer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Outer;
}
constexpr ::UnityW<::UnityEngine::Animation> const& UnityEngine::Animation_Enumerator::__cordl_internal_get_m_Outer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Outer;
}
constexpr void UnityEngine::Animation_Enumerator::__cordl_internal_set_m_Outer(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Outer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Animation_Enumerator::__cordl_internal_get_m_CurrentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentIndex;
}
constexpr int32_t const& UnityEngine::Animation_Enumerator::__cordl_internal_get_m_CurrentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentIndex;
}
constexpr void UnityEngine::Animation_Enumerator::__cordl_internal_set_m_CurrentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentIndex = value;
}
inline void UnityEngine::Animation_Enumerator::_ctor(::UnityEngine::Animation*  outer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation_Enumerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Animation*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outer);
}
inline ::System::Object* UnityEngine::Animation_Enumerator::get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation_Enumerator*>::get(),
                        "get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool UnityEngine::Animation_Enumerator::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation_Enumerator*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Animation_Enumerator::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation_Enumerator*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Animation_Enumerator* UnityEngine::Animation_Enumerator::New_ctor(::UnityEngine::Animation*  outer)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Animation_Enumerator*>(outer));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::Animation_Enumerator::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::Animation_Enumerator::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Animation_Enumerator::Animation_Enumerator()   {
}
//  Writing Method size for method: ::UnityEngine::Animation.GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Animation::*)()>(&::UnityEngine::Animation::GetEnumerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2f52ba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animation.GetStateAtIndex
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationState* (::UnityEngine::Animation::*)(int32_t)>(&::UnityEngine::Animation::GetStateAtIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f52c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation*>::get(),
                        "GetStateAtIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animation.GetStateCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Animation::*)()>(&::UnityEngine::Animation::GetStateCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f52c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation*>::get(),
                        "GetStateCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::IEnumerator* UnityEngine::Animation::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation*>::get(),
                        "GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::UnityEngine::AnimationState* UnityEngine::Animation::GetStateAtIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation*>::get(),
                        "GetStateAtIndex",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationState*, false>(this, ___internal_method, index);
}
inline int32_t UnityEngine::Animation::GetStateCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Animation*>::get(),
                        "GetStateCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Animation::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Animation::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Animation::Animation()   {
}
