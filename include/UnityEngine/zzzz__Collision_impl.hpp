#pragma once
// IWYU pragma private; include "UnityEngine/Collision.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_impl.hpp"
#include "UnityEngine/zzzz__ContactPair_impl.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__ContactPairHeader_def.hpp"
#include "UnityEngine/zzzz__ContactPair_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
//  Writing Method size for method: ::UnityEngine::Collision.set_Flipped
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Collision::*)(bool)>(&::UnityEngine::Collision::set_Flipped)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fc23a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(),
                        "set_Flipped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.get_contacts
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*> (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::get_contacts)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2fc23b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(),
                        "get_contacts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Collision::*)()>(&::UnityEngine::Collision::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2fc24ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Collision::*)(::ByRef<::UnityEngine::ContactPairHeader>, ::ByRef<::UnityEngine::ContactPair>, bool)>(&::UnityEngine::Collision::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2fc24e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPairHeader>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Collision.Reuse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Collision::*)(::ByRef<::UnityEngine::ContactPairHeader>, ::ByRef<::UnityEngine::ContactPair>)>(&::UnityEngine::Collision::Reuse)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2fc25bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(),
                        "Reuse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPairHeader>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPair>>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ContactPairHeader& UnityEngine::Collision::__cordl_internal_get_m_Header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Header;
}
constexpr ::UnityEngine::ContactPairHeader const& UnityEngine::Collision::__cordl_internal_get_m_Header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Header;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Header(::UnityEngine::ContactPairHeader  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Header = value;
}
constexpr ::UnityEngine::ContactPair& UnityEngine::Collision::__cordl_internal_get_m_Pair()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pair;
}
constexpr ::UnityEngine::ContactPair const& UnityEngine::Collision::__cordl_internal_get_m_Pair() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Pair;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Pair(::UnityEngine::ContactPair  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Pair = value;
}
constexpr bool& UnityEngine::Collision::__cordl_internal_get_m_Flipped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flipped;
}
constexpr bool const& UnityEngine::Collision::__cordl_internal_get_m_Flipped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flipped;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_Flipped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Flipped = value;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>& UnityEngine::Collision::__cordl_internal_get_m_LegacyContacts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*> const& UnityEngine::Collision::__cordl_internal_get_m_LegacyContacts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyContacts;
}
constexpr void UnityEngine::Collision::__cordl_internal_set_m_LegacyContacts(::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_LegacyContacts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Collision::set_Flipped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(),
                        "set_Flipped",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*> UnityEngine::Collision::get_contacts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(),
                        "get_contacts",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ContactPoint,::Array<::UnityEngine::ContactPoint>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Collision::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Collision::_ctor(::ByRef<::UnityEngine::ContactPairHeader>  header, ::ByRef<::UnityEngine::ContactPair>  pair, bool  flipped)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPairHeader>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPair>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, header, pair, flipped);
}
inline void UnityEngine::Collision::Reuse(::ByRef<::UnityEngine::ContactPairHeader>  header, ::ByRef<::UnityEngine::ContactPair>  pair)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Collision*>::get(),
                        "Reuse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPairHeader>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::ContactPair>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, header, pair);
}
inline ::UnityEngine::Collision* UnityEngine::Collision::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Collision*>());
}
inline ::UnityEngine::Collision* UnityEngine::Collision::New_ctor(::ByRef<::UnityEngine::ContactPairHeader>  header, ::ByRef<::UnityEngine::ContactPair>  pair, bool  flipped)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Collision*>(header, pair, flipped));
}
// Ctor Parameters []
constexpr ::UnityEngine::Collision::Collision()   {
}
