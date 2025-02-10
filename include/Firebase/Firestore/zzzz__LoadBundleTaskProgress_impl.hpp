#pragma once
// IWYU pragma private; include "Firebase/Firestore/LoadBundleTaskProgress.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "Firebase/Firestore/zzzz__LoadBundleTaskProgress_def.hpp"
#include "Firebase/Firestore/zzzz__LoadBundleTaskProgressProxy_def.hpp"
#include "Firebase/Firestore/zzzz__LoadBundleTaskProgress_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState::LoadBundleTaskProgress_LoadBundleTaskState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState::LoadBundleTaskProgress_LoadBundleTaskState()   {
}
constexpr ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState  Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState::Error{static_cast<int32_t>(0x0)};
constexpr ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState  Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState::InProgress{static_cast<int32_t>(0x1)};
constexpr ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState  Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState::Success{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::LoadBundleTaskProgress::*)(::Firebase::Firestore::LoadBundleTaskProgressProxy*)>(&::Firebase::Firestore::LoadBundleTaskProgress::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1919f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::LoadBundleTaskProgressProxy*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.get_DocumentsLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::Firestore::LoadBundleTaskProgress::*)()>(&::Firebase::Firestore::LoadBundleTaskProgress::get_DocumentsLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "get_DocumentsLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.set_DocumentsLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::LoadBundleTaskProgress::*)(int32_t)>(&::Firebase::Firestore::LoadBundleTaskProgress::set_DocumentsLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "set_DocumentsLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.get_TotalDocuments
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::Firestore::LoadBundleTaskProgress::*)()>(&::Firebase::Firestore::LoadBundleTaskProgress::get_TotalDocuments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "get_TotalDocuments",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.set_TotalDocuments
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::LoadBundleTaskProgress::*)(int32_t)>(&::Firebase::Firestore::LoadBundleTaskProgress::set_TotalDocuments)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "set_TotalDocuments",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.get_BytesLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Firebase::Firestore::LoadBundleTaskProgress::*)()>(&::Firebase::Firestore::LoadBundleTaskProgress::get_BytesLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "get_BytesLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.set_BytesLoaded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::LoadBundleTaskProgress::*)(int64_t)>(&::Firebase::Firestore::LoadBundleTaskProgress::set_BytesLoaded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "set_BytesLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.get_TotalBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Firebase::Firestore::LoadBundleTaskProgress::*)()>(&::Firebase::Firestore::LoadBundleTaskProgress::get_TotalBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "get_TotalBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.set_TotalBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::LoadBundleTaskProgress::*)(int64_t)>(&::Firebase::Firestore::LoadBundleTaskProgress::set_TotalBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "set_TotalBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.get_State
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState (::Firebase::Firestore::LoadBundleTaskProgress::*)()>(&::Firebase::Firestore::LoadBundleTaskProgress::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "get_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.set_State
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Firebase::Firestore::LoadBundleTaskProgress::*)(::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState)>(&::Firebase::Firestore::LoadBundleTaskProgress::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x191a050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "set_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Firebase::Firestore::LoadBundleTaskProgress::*)(::System::Object*)>(&::Firebase::Firestore::LoadBundleTaskProgress::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x191a058;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Firebase::Firestore::LoadBundleTaskProgress.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Firebase::Firestore::LoadBundleTaskProgress::*)()>(&::Firebase::Firestore::LoadBundleTaskProgress::GetHashCode)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x191a114;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr int32_t& Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_get__DocumentsLoaded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DocumentsLoaded_k__BackingField;
}
constexpr int32_t const& Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_get__DocumentsLoaded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DocumentsLoaded_k__BackingField;
}
constexpr void Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_set__DocumentsLoaded_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DocumentsLoaded_k__BackingField = value;
}
constexpr int32_t& Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_get__TotalDocuments_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalDocuments_k__BackingField;
}
constexpr int32_t const& Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_get__TotalDocuments_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalDocuments_k__BackingField;
}
constexpr void Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_set__TotalDocuments_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TotalDocuments_k__BackingField = value;
}
constexpr int64_t& Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_get__BytesLoaded_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BytesLoaded_k__BackingField;
}
constexpr int64_t const& Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_get__BytesLoaded_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BytesLoaded_k__BackingField;
}
constexpr void Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_set__BytesLoaded_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BytesLoaded_k__BackingField = value;
}
constexpr int64_t& Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_get__TotalBytes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytes_k__BackingField;
}
constexpr int64_t const& Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_get__TotalBytes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TotalBytes_k__BackingField;
}
constexpr void Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_set__TotalBytes_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TotalBytes_k__BackingField = value;
}
constexpr ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState& Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_get__State_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState const& Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_get__State_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____State_k__BackingField;
}
constexpr void Firebase::Firestore::LoadBundleTaskProgress::__cordl_internal_set__State_k__BackingField(::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____State_k__BackingField = value;
}
inline void Firebase::Firestore::LoadBundleTaskProgress::_ctor(::Firebase::Firestore::LoadBundleTaskProgressProxy*  proxy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::LoadBundleTaskProgressProxy*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, proxy);
}
inline int32_t Firebase::Firestore::LoadBundleTaskProgress::get_DocumentsLoaded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "get_DocumentsLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Firebase::Firestore::LoadBundleTaskProgress::set_DocumentsLoaded(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "set_DocumentsLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Firebase::Firestore::LoadBundleTaskProgress::get_TotalDocuments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "get_TotalDocuments",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Firebase::Firestore::LoadBundleTaskProgress::set_TotalDocuments(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "set_TotalDocuments",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t Firebase::Firestore::LoadBundleTaskProgress::get_BytesLoaded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "get_BytesLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Firebase::Firestore::LoadBundleTaskProgress::set_BytesLoaded(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "set_BytesLoaded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t Firebase::Firestore::LoadBundleTaskProgress::get_TotalBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "get_TotalBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Firebase::Firestore::LoadBundleTaskProgress::set_TotalBytes(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "set_TotalBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState Firebase::Firestore::LoadBundleTaskProgress::get_State()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "get_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState, false>(this, ___internal_method);
}
inline void Firebase::Firestore::LoadBundleTaskProgress::set_State(::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                        "set_State",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Firebase::Firestore::LoadBundleTaskProgress_LoadBundleTaskState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Firebase::Firestore::LoadBundleTaskProgress::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t Firebase::Firestore::LoadBundleTaskProgress::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Firebase::Firestore::LoadBundleTaskProgress*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Firebase::Firestore::LoadBundleTaskProgress* Firebase::Firestore::LoadBundleTaskProgress::New_ctor(::Firebase::Firestore::LoadBundleTaskProgressProxy*  proxy)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Firebase::Firestore::LoadBundleTaskProgress*>(proxy));
}
// Ctor Parameters []
constexpr ::Firebase::Firestore::LoadBundleTaskProgress::LoadBundleTaskProgress()   {
}
