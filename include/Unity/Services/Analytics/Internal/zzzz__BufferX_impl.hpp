#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Internal/BufferX.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBuffer_impl.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__BufferX_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBufferIds_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBufferSystemCalls_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IDiskCache_def.hpp"
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.get_Length
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Analytics::Internal::BufferX::*)()>(&::Unity::Services::Analytics::Internal::BufferX::get_Length)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2e904c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "get_Length",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)(::Unity::Services::Analytics::Internal::IBufferSystemCalls*, ::Unity::Services::Analytics::Internal::IDiskCache*)>(&::Unity::Services::Analytics::Internal::BufferX::_ctor)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x2e8a978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IBufferSystemCalls*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IDiskCache*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.InjectIds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)(::Unity::Services::Analytics::Internal::IBufferIds*)>(&::Unity::Services::Analytics::Internal::BufferX::InjectIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e9057c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "InjectIds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IBufferIds*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.WriteString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)(::ByRef<::StringW>)>(&::Unity::Services::Analytics::Internal::BufferX::WriteString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e90584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "WriteString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.WriteByte
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)(::ByRef<uint8_t>)>(&::Unity::Services::Analytics::Internal::BufferX::WriteByte)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e9060c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "WriteByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint8_t>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.WriteBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)(::ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>)>(&::Unity::Services::Analytics::Internal::BufferX::WriteBytes)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2e90634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "WriteBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.WriteName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)(::StringW)>(&::Unity::Services::Analytics::Internal::BufferX::WriteName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2e90668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "WriteName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.PushStartEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)(::StringW, ::System::DateTime, ::System::Nullable_1<int64_t>, bool)>(&::Unity::Services::Analytics::Internal::BufferX::PushStartEvent)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x2e906c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "PushStartEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.StripTrailingCommaIfNecessary
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)()>(&::Unity::Services::Analytics::Internal::BufferX::StripTrailingCommaIfNecessary)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2e90af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "StripTrailingCommaIfNecessary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.PushEndEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)()>(&::Unity::Services::Analytics::Internal::BufferX::PushEndEvent)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2e90ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "PushEndEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.PushDouble
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)(double_t, ::StringW)>(&::Unity::Services::Analytics::Internal::BufferX::PushDouble)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2e90dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "PushDouble",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.PushString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)(::StringW, ::StringW)>(&::Unity::Services::Analytics::Internal::BufferX::PushString)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x2e90e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "PushString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.Serialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Unity::Services::Analytics::Internal::BufferX::*)()>(&::Unity::Services::Analytics::Internal::BufferX::Serialize)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2e913a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "Serialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.ClearBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)()>(&::Unity::Services::Analytics::Internal::BufferX::ClearBuffer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2e904e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "ClearBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.ClearBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)(int64_t)>(&::Unity::Services::Analytics::Internal::BufferX::ClearBuffer)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x2e915c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "ClearBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.FlushToDisk
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)()>(&::Unity::Services::Analytics::Internal::BufferX::FlushToDisk)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2e917f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "FlushToDisk",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.ClearDiskCache
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Internal::BufferX::*)()>(&::Unity::Services::Analytics::Internal::BufferX::ClearDiskCache)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2e918ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "ClearDiskCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Internal::BufferX.SerializeDateTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::DateTime)>(&::Unity::Services::Analytics::Internal::BufferX::SerializeDateTime)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2e8d9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "SerializeDateTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_WorkingBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_WorkingBuffer;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_WorkingBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_WorkingBuffer;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_WorkingBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_WorkingBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_WorkingCharacterBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_WorkingCharacterBuffer;
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_WorkingCharacterBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_WorkingCharacterBuffer;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_WorkingCharacterBuffer(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_WorkingCharacterBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_BufferHeader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_BufferHeader;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_BufferHeader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_BufferHeader;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_BufferHeader(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_BufferHeader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderEventName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderEventName;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderEventName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderEventName;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_HeaderEventName(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_HeaderEventName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderUserName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderUserName;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderUserName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderUserName;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_HeaderUserName(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_HeaderUserName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderSessionID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderSessionID;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderSessionID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderSessionID;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_HeaderSessionID(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_HeaderSessionID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderEventUUID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderEventUUID;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderEventUUID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderEventUUID;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_HeaderEventUUID(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_HeaderEventUUID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderTimestamp;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderTimestamp;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_HeaderTimestamp(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_HeaderTimestamp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderEventVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderEventVersion;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderEventVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderEventVersion;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_HeaderEventVersion(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_HeaderEventVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderInstallationID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderInstallationID;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderInstallationID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderInstallationID;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_HeaderInstallationID(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_HeaderInstallationID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderPlayerID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderPlayerID;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderPlayerID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderPlayerID;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_HeaderPlayerID(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_HeaderPlayerID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderOpenEventParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderOpenEventParams;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_HeaderOpenEventParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_HeaderOpenEventParams;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_HeaderOpenEventParams(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_HeaderOpenEventParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_CloseEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_CloseEvent;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_CloseEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_CloseEvent;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_CloseEvent(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_CloseEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_Quote()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_Quote;
}
constexpr uint8_t const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_Quote() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_Quote;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_Quote(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___k_Quote = value;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_QuoteColon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_QuoteColon;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_QuoteColon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_QuoteColon;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_QuoteColon(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_QuoteColon)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_QuoteComma()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_QuoteComma;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_QuoteComma() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_QuoteComma;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_QuoteComma(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_QuoteComma)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_Comma()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_Comma;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_Comma() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_Comma;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_Comma(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_Comma)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_OpenBrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_OpenBrace;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_OpenBrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_OpenBrace;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_OpenBrace(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_OpenBrace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_CloseBraceComma()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_CloseBraceComma;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_CloseBraceComma() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_CloseBraceComma;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_CloseBraceComma(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_CloseBraceComma)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_OpenBracket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_OpenBracket;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_OpenBracket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_OpenBracket;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_OpenBracket(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_OpenBracket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_CloseBracketComma()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_CloseBracketComma;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_CloseBracketComma() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_CloseBracketComma;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_CloseBracketComma(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_CloseBracketComma)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_True()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_True;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_True() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_True;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_True(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_True)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_False()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_False;
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_k_False() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___k_False;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_k_False(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k_False)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::IBufferSystemCalls*& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_SystemCalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SystemCalls;
}
constexpr ::Unity::Services::Analytics::Internal::IBufferSystemCalls* const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_SystemCalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SystemCalls;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_m_SystemCalls(::Unity::Services::Analytics::Internal::IBufferSystemCalls*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SystemCalls)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::IDiskCache*& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_DiskCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DiskCache;
}
constexpr ::Unity::Services::Analytics::Internal::IDiskCache* const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_DiskCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DiskCache;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_m_DiskCache(::Unity::Services::Analytics::Internal::IDiskCache*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DiskCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Analytics::Internal::IBufferIds*& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_Ids()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ids;
}
constexpr ::Unity::Services::Analytics::Internal::IBufferIds* const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_Ids() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Ids;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_m_Ids(::Unity::Services::Analytics::Internal::IBufferIds*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Ids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_EventEnds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EventEnds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_EventEnds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EventEnds;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_m_EventEnds(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EventEnds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::MemoryStream*& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_SpareBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SpareBuffer;
}
constexpr ::System::IO::MemoryStream* const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_SpareBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SpareBuffer;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_m_SpareBuffer(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SpareBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::MemoryStream*& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_Buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Buffer;
}
constexpr ::System::IO::MemoryStream* const& Unity::Services::Analytics::Internal::BufferX::__cordl_internal_get_m_Buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Buffer;
}
constexpr void Unity::Services::Analytics::Internal::BufferX::__cordl_internal_set_m_Buffer(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t Unity::Services::Analytics::Internal::BufferX::get_Length()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "get_Length",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::BufferX::_ctor(::Unity::Services::Analytics::Internal::IBufferSystemCalls*  eventIdGenerator, ::Unity::Services::Analytics::Internal::IDiskCache*  diskCache)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IBufferSystemCalls*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IDiskCache*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventIdGenerator, diskCache);
}
inline void Unity::Services::Analytics::Internal::BufferX::InjectIds(::Unity::Services::Analytics::Internal::IBufferIds*  ids)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "InjectIds",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IBufferIds*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ids);
}
inline void Unity::Services::Analytics::Internal::BufferX::WriteString(::ByRef<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "WriteString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Analytics::Internal::BufferX::WriteByte(::ByRef<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "WriteByte",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint8_t>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::Services::Analytics::Internal::BufferX::WriteBytes(::ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  bytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "WriteBytes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes);
}
inline void Unity::Services::Analytics::Internal::BufferX::WriteName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "WriteName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void Unity::Services::Analytics::Internal::BufferX::PushStartEvent(::StringW  name, ::System::DateTime  datetime, ::System::Nullable_1<int64_t>  eventVersion, bool  addPlayerIdsToEventBody)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "PushStartEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, datetime, eventVersion, addPlayerIdsToEventBody);
}
inline void Unity::Services::Analytics::Internal::BufferX::StripTrailingCommaIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "StripTrailingCommaIfNecessary",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::BufferX::PushEndEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "PushEndEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::BufferX::PushDouble(double_t  val, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "PushDouble",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, val, name);
}
inline void Unity::Services::Analytics::Internal::BufferX::PushString(::StringW  value, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "PushString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, name);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Unity::Services::Analytics::Internal::BufferX::Serialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "Serialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::BufferX::ClearBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "ClearBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::BufferX::ClearBuffer(int64_t  upTo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "ClearBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upTo);
}
inline void Unity::Services::Analytics::Internal::BufferX::FlushToDisk()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "FlushToDisk",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Analytics::Internal::BufferX::ClearDiskCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "ClearDiskCache",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Unity::Services::Analytics::Internal::BufferX::SerializeDateTime(::System::DateTime  dateTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Internal::BufferX*>::get(),
                        "SerializeDateTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, dateTime);
}
inline ::Unity::Services::Analytics::Internal::BufferX* Unity::Services::Analytics::Internal::BufferX::New_ctor(::Unity::Services::Analytics::Internal::IBufferSystemCalls*  eventIdGenerator, ::Unity::Services::Analytics::Internal::IDiskCache*  diskCache)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Internal::BufferX*>(eventIdGenerator, diskCache));
}
/// @brief Convert operator to "::Unity::Services::Analytics::Internal::IBuffer"
constexpr  Unity::Services::Analytics::Internal::BufferX::operator ::Unity::Services::Analytics::Internal::IBuffer*() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IBuffer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Internal::IBuffer"
constexpr ::Unity::Services::Analytics::Internal::IBuffer* Unity::Services::Analytics::Internal::BufferX::i___Unity__Services__Analytics__Internal__IBuffer() noexcept {
return static_cast<::Unity::Services::Analytics::Internal::IBuffer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Internal::BufferX::BufferX()   {
}
