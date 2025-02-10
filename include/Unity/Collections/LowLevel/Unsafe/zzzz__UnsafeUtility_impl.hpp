#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeUtility_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeUtility_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__LeakCategory_def.hpp"
// Ctor Parameters [CppParam { name: "dummy", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty: "T", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility_AlignOfHelper_1<T>::UnsafeUtility_AlignOfHelper_1(uint8_t  dummy, T  data) noexcept  {
this->dummy = dummy;
this->data = data;
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility_AlignOfHelper_1<T>::UnsafeUtility_AlignOfHelper_1()   {
}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.LeakErase
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::Unity::Collections::LeakCategory)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::LeakErase)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5c12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "LeakErase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LeakCategory>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MallocTracked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (*)(int64_t, int32_t, ::Unity::Collections::Allocator, int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MallocTracked)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2f5c170;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MallocTracked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.FreeTracked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, ::Unity::Collections::Allocator)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::FreeTracked)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5bed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "FreeTracked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.Malloc
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (*)(int64_t, int32_t, ::Unity::Collections::Allocator)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Malloc)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5c1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "Malloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.Free
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, ::Unity::Collections::Allocator)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Free)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2f5c220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "Free",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemCpy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCpy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5bca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemCpy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemCpyStride
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, int32_t, ::cordl_internals::Ptr<void>, int32_t, int32_t, int32_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCpyStride)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2f5c264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemCpyStride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemMove
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemMove)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5c2d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemMove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemSet
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, uint8_t, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemSet)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5c32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemClear
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemClear)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2f5c380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemClear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility.MemCmp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<void>, int64_t)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCmp)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2f5c3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemCmp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::LeakErase(::System::IntPtr  handle, ::Unity::Collections::LeakCategory  category)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "LeakErase",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LeakCategory>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, handle, category);
}
inline ::cordl_internals::Ptr<void> Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MallocTracked(int64_t  size, int32_t  alignment, ::Unity::Collections::Allocator  allocator, int32_t  callstacksToSkip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MallocTracked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, size, alignment, allocator, callstacksToSkip);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::FreeTracked(::cordl_internals::Ptr<void>  memory, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "FreeTracked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, memory, allocator);
}
inline ::cordl_internals::Ptr<void> Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Malloc(int64_t  size, int32_t  alignment, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "Malloc",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, size, alignment, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::Free(::cordl_internals::Ptr<void>  memory, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "Free",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, memory, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCpy(::cordl_internals::Ptr<void>  destination, ::cordl_internals::Ptr<void>  source, int64_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemCpy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, destination, source, size);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCpyStride(::cordl_internals::Ptr<void>  destination, int32_t  destinationStride, ::cordl_internals::Ptr<void>  source, int32_t  sourceStride, int32_t  elementSize, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemCpyStride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, destination, destinationStride, source, sourceStride, elementSize, count);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemMove(::cordl_internals::Ptr<void>  destination, ::cordl_internals::Ptr<void>  source, int64_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemMove",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, destination, source, size);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemSet(::cordl_internals::Ptr<void>  destination, uint8_t  value, int64_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, destination, value, size);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemClear(::cordl_internals::Ptr<void>  destination, int64_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemClear",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, destination, size);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::MemCmp(::cordl_internals::Ptr<void>  ptr1, ::cordl_internals::Ptr<void>  ptr2, int64_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                        "MemCmp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, ptr1, ptr2, size);
}
template<typename T>
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::AlignOf()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "AlignOf",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
template<typename T>
inline T Unity::Collections::LowLevel::Unsafe::UnsafeUtility::ReadArrayElement(::cordl_internals::Ptr<void>  source, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "ReadArrayElement",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, source, index);
}
template<typename T>
inline T Unity::Collections::LowLevel::Unsafe::UnsafeUtility::ReadArrayElementWithStride(::cordl_internals::Ptr<void>  source, int32_t  index, int32_t  stride)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "ReadArrayElementWithStride",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, source, index, stride);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::WriteArrayElement(::cordl_internals::Ptr<void>  destination, int32_t  index, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "WriteArrayElement",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, destination, index, value);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::WriteArrayElementWithStride(::cordl_internals::Ptr<void>  destination, int32_t  index, int32_t  stride, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "WriteArrayElementWithStride",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, destination, index, stride, value);
}
template<typename T>
inline ::cordl_internals::Ptr<void> Unity::Collections::LowLevel::Unsafe::UnsafeUtility::AddressOf(::ByRef<T>  output)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "AddressOf",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(nullptr, ___internal_method, output);
}
template<typename T>
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::SizeOf()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "SizeOf",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::span<const Il2CppType* const, 0>()
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
template<typename U,typename T>
inline ::ByRef<T> Unity::Collections::LowLevel::Unsafe::UnsafeUtility::As(::ByRef<U>  from)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "As",
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<U>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(nullptr, ___internal_method, from);
}
template<typename T>
inline ::ByRef<T> Unity::Collections::LowLevel::Unsafe::UnsafeUtility::AsRef(::cordl_internals::Ptr<void>  ptr)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "AsRef",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(nullptr, ___internal_method, ptr);
}
template<typename T>
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeUtility::EnumToInt(T  enumValue)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "EnumToInt",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, enumValue);
}
template<typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeUtility::InternalEnumToInt(::ByRef<T>  enumValue, ::ByRef<int32_t>  intValue)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "InternalEnumToInt",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, enumValue, intValue);
}
template<typename T>
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeUtility::EnumEquals(T  lhs, T  rhs)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeUtility*>::get(),
                    "EnumEquals",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::UnsafeUtility()   {
}
