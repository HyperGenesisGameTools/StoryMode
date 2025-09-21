# Project State: StoryMode

This document details the current state of the `StoryMode` Unreal Engine project.

## Project Purpose

The `StoryMode` project is a system for creating narrative-driven experiences in Unreal Engine. Based on the file structure and asset names, it appears to be a "Story Engine" that utilizes a node-based system for constructing stories. The engine is encapsulated within a plugin, `StoryEngine`, which provides the core functionality.

## Project Structure

The project is organized into two main parts:

1.  **`StoryMode` Project:** This is the main Unreal Engine project (`.uproject`) that serves as a container and entry point for the game. It is a lightweight project that primarily loads and uses the `StoryEngine` plugin.

2.  **`StoryEngine` Plugin:** This plugin, located in the `Plugins/` directory, contains the core logic and content of the story engine. It is composed of:
    *   **C++ Modules:**
        *   `StoryEngine` (Runtime): Provides the base classes and subsystems for the story engine's runtime functionality.
        *   `StoryEditor` (Editor): Contains the editor-specific functionality for creating and managing story content.
    *   **Content:** The `Content/` directory of the plugin holds the Blueprint assets that implement the majority of the engine's logic.

## Key Components of the StoryEngine Plugin

The `StoryEngine` plugin's functionality is primarily defined by its content assets:

*   **Scene Data (`Data/DAT_Scene.uasset`):** This is likely a Data Asset that defines the structure and properties of a "Scene" within a story.

*   **Node and Ticket Structs (`Structs/`):**
    *   `NodeStruct.uasset`: This struct likely defines the data for a single node in the story graph (e.g., a piece of dialogue, an event, a choice).
    *   `TicketStruct.uasset`: This struct may represent the connections or transitions between nodes in the story graph.

*   **Stubbable System (`Interfaces/` and `UObjects/`):**
    *   `Stubbable.uasset`: An interface that can be implemented by objects that need to be "stubbed" or replaced with placeholder or alternative content.
    *   `Stub.uasset`: A UObject class, likely implemented in Blueprints, that serves as a placeholder or modular piece of story content.

*   **Example (`StoryExample/`):** This directory contains example content demonstrating how to use the story engine.
